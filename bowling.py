def bowling_score(game):
    score = 0
    for i in range(10):
        frame = game[i * 2 : (i + 1) * 2]
        if "/" in frame:
            roll1, roll2 = map(int, re.split("/", frame))
            if i < 9 and (roll1 + roll2) == 10:
                score += 10
            else:
                score += sum(roll1, roll2)
        else:
            score += int(frame[0])
    return score