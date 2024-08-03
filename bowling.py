def bowling_score(s):
    score = 0
    frame = 1
    for bowl in s:
        if bowl == "X":
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif bowl == "/":
            score += 10
            frame += 1
        else:
            if int(bowl) + score % 10 >= 10:
                score += 10 - (score % 10)
                frame += 1
            else:
                score += int(bowls)
    return score