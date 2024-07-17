def bowling_score(rolls):
    score = 0
    roll = 0
    frame = 1
    while frame <= 10:
        if len(rolls[roll:]) < 2:
            if rolls[roll] == "X":
                score += 10
            else:
                score += int(rolls[roll])
            roll += 1
            frame += 1
        elif len(rolls[roll:]) >= 2 and rolls[roll : roll + 2][0] != "/":
            if rolls[roll : roll + 2][0] == "X":
                score += 10 + int(rolls[roll + 1])
            else:
                score += int(rolls[roll]) + int(rolls[roll + 1])
            roll += 2
            frame += 1
        elif len(rolls[roll:]) >= 3 and rolls[roll : roll + 3][0] == "/":
            bonus = 10 - int(rolls[roll + 1].split("/")[0])
            score += int(rolls[roll].split("/")[0]) + bonus
            roll += 3
            frame += 1
        else:
            if rolls[roll] == "X":
                score += 10 + int(rolls[roll + 1].split("/")[0])
            else:
                score += int(rolls[roll].split("/")[0]) + int(
                    rolls[roll + 1].split("/")[0]
                )
            roll += 2
            frame += 1
    return score