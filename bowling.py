def bowling(score):
    total_score = 0
    frame = 1
    rolls = []

    for char in score:
        if char == "X":
            rolls.extend([10, 0])
            frame += 1
        elif char == "/":
            rolls.append(10 - rolls[-1])
            frame += 1
        elif char == "-":
            rolls.append(0)
        else:
            rolls.append(int(char))

        if frame > 10:
            break

    for i in range(0, len(rolls), 2):
        total_score += rolls[i] + rolls[i + 1]
        if rolls[i] == 10:
            if rolls[i + 2] == 10:
                total_score += rolls[i + 2] + rolls[i + 4]
            else:
                total_score += rolls[i + 2] + rolls[i + 3]
        elif rolls[i] + rolls[i + 1] == 10:
            total_score += rolls[i + 2]

    return total_score


# Read input from user
input_score = input()
print(bowling(input_score))