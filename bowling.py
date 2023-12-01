def calculate_bowling_score(bowling_round):
    score = 0
    frame = 1
    frame_count = 0
    in_first_half = True

    for i in range(len(bowling_round)):
        if bowling_round[i] == '/':
            score += 10 - previous_bowl
            if frame < 10:
                score += get_bonus_score(bowling_round, i + 1)
            frame_count += 1
            in_first_half = True
        elif bowling_round[i] == 'X':
            score += 10
            if frame < 10:
                score += get_bonus_score(bowling_round, i + 1)
            frame_count += 1
        elif bowling_round[i] == '-':
            frame_count += 1
            in_first_half = not in_first_half
        else:
            score += int(bowling_round[i])
            if in_first_half:
                in_first_half = False
            else:
                if frame < 10:
                    score += get_bonus_score(bowling_round, i + 1)
                frame_count += 1

        if frame_count == 2:
            frame += 1
            frame_count = 0
            in_first_half = True

    return score


def get_bonus_score(bowling_round, index):
    if bowling_round[index] == 'X':
        return 10
    elif bowling_round[index] == '/':
        return 10 - int(bowling_round[index-1])
    elif bowling_round[index] == '-':
        return 0
    else:
        return int(bowling_round[index])


# Read input from user and get bowling round
bowling_round = input()

# Calculate and print the score
print(calculate_bowling_score(bowling_round))