def bowling_score(bowls):
    score = 0
    frame = 1
    rolls = []
    for bowl in bowls:
        if bowl == "X":
            rolls.append(10)
            if frame < 10:
                rolls.append(0)
        elif bowl == "/":
            rolls.append(10 - rolls[-1])
        elif bowl == "-":
            rolls.append(0)
        else:
            rolls.append(int(bowl))
        if len(rolls) >= 2 and sum(rolls[-2:]) >= 10:
            score += sum(rolls[-2:]) + rolls[-1]
        elif len(rolls) >= 4 and sum(rolls[-4:]) == 10:
            score += sum(rolls[-4:]) + rolls[-1]
        else:
            score += sum(rolls[-2:])
        if frame < 10 and (bowl == "X" or len(rolls) == 2):
            frame += 1
    return score


bowls = input()
print(bowling_score(bowls))