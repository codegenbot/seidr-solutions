def bowling_score(bowls):
    score = 0
    frame = 1
    ball = 0
    rolls = []

    for b in bowls:
        if b == "/":
            rolls.append(10 - rolls[-1])
        elif b == "X":
            rolls.extend([10, 0])
        else:
            rolls.append(int(b))

    for i in range(len(rolls)):
        score += rolls[i]
        if frame < 10 and rolls[i] == 10:
            score += rolls[i + 1] + rolls[i + 2]
        elif frame < 10 and rolls[i] + rolls[i - 1] == 10:
            score += rolls[i + 1]
        if rolls[i] == 10 or ball == 1:
            frame += 1
            ball = 0
        else:
            ball += 1

    return score


bowls = input()
print(bowling_score(bowls))