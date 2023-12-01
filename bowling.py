def calculate_score(bowls):
    score = 0
    frame = 1
    in_first_half = True

    for i in range(len(bowls)):
        if bowls[i] == '/':
            score += 10 - last_bowl
            if frame < 10:
                score += int(bowls[i+1])
        elif bowls[i] == 'X':
            score += 10
            if frame < 10:
                score += int(bowls[i+1]) + int(bowls[i+2])
        else:
            score += int(bowls[i])

        if not in_first_half:
            frame += 1

        if bowls[i] == 'X':
            in_first_half = True
        else:
            in_first_half = not in_first_half

        last_bowl = int(bowls[i])

    return score

# Read input from user
bowls = input()

# Calculate and print the score
print(calculate_score(bowls))