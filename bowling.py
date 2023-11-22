def calculate_score(bowls):
    score = 0
    frame = 1
    frame_index = 0
    frame_scores = [0] * 10

    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
            if frame < 10:
                frame_scores[frame - 1] = 10 + calculate_strike_bonus(bowls, i)
            frame += 1
        elif bowls[i] == '/':
            score += 10 - int(bowls[i-1])
            if frame < 10:
                frame_scores[frame - 1] = 10 + calculate_spare_bonus(bowls, i)
            frame += 1
        elif bowls[i] == '-':
            score += 0
        else:
            score += int(bowls[i])
            if frame < 10:
                frame_scores[frame - 1] += int(bowls[i])
            if frame_index % 2 != 0:
                frame += 1
            frame_index += 1

    return sum(frame_scores) + score


def calculate_strike_bonus(bowls, index):
    if bowls[index + 2] == 'X':
        return 10 + 10
    elif bowls[index + 2] == '/':
        return 10 + (10 - int(bowls[index + 1]))
    elif bowls[index + 2] == '-':
        return 10
    else:
        return 10 + int(bowls[index + 1]) + int(bowls[index + 2])


def calculate_spare_bonus(bowls, index):
    if bowls[index + 1] == 'X':
        return 10
    elif bowls[index + 1] == '-':
        return 0
    else:
        return int(bowls[index + 1])


# Read input from user
bowls = input()

# Calculate and print the score
print(calculate_score(bowls))