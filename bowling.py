def bowling_score(bowls):
    score = 0
    frame = 1
    rolls = []
    for bowl in bowls:
        if bowl == "X":
            rolls.append(10)
            if frame < 10:
                frame += 1
        elif bowl == "/":
            rolls.append(10 - rolls[-1])
            if frame < 10:
                frame += 1
        elif bowl == "-":
            rolls.append(0)
        else:
            rolls.append(int(bowl))

    i = 0
    for _ in range(10):
        if rolls[i] == 10:
            score += 10 + rolls[i + 1] + rolls[i + 2]
            i += 1
        elif rolls[i] + rolls[i + 1] == 10:
            score += 10 + rolls[i + 2]
            i += 2
        else:
            score += rolls[i] + rolls[i + 1]
            i += 2

    return score