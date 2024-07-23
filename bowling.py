def bowling_score(frames):
    score = 0
    frame = 1
    rolls = []

    for char in frames:
        if char == "X":
            rolls.append(10)
            if frame < 10:
                rolls.append(0)
            frame += 1
        elif char == "/":
            rolls.append(10 - rolls.pop())
        elif char == "-":
            rolls.append(0)
        else:
            rolls.append(int(char))

    for i in range(10):
        if rolls[i * 2] == 10:  # Strike
            score += 10 + rolls[i * 2 + 2] + rolls[i * 2 + 4]
        elif rolls[i * 2] + rolls[i * 2 + 1] == 10:  # Spare
            score += 10 + rolls[i * 2 + 2]
        else:
            score += rolls[i * 2] + rolls[i * 2 + 1]

    return score


frames = input()
print(bowling_score(frames))