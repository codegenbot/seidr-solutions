def bowling_score(bowls):
    score = 0
    frame = 1
    rolls = []
    for bowl in bowls:
        if bowl == "X":
            rolls.append(10)
            if frame < 10:
                rolls.append(0)
            frame += 1
        elif bowl == "/":
            rolls.append(10 - rolls[-1])
        elif bowl == "-":
            rolls.append(0)
        else:
            rolls.append(int(bowl))

    for i in range(10):
        if rolls[i * 2] == 10:
            score += 10 + rolls[i * 2 + 2] + rolls[i * 2 + 3]
        elif rolls[i * 2] + rolls[i * 2 + 1] == 10:
            score += 10 + rolls[i * 2 + 2]
        else:
            score += rolls[i * 2] + rolls[i * 2 + 1]

    return score


bowls = input()
print(bowling_score(bowls))