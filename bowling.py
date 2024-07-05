def bowling_score(score_string):
    score = 0
    roll = 0
    for frame in score_string.split("/"):
        if len(frame) == 1:
            score += 10
        elif frame[0] != "X":
            if int(frame[0]) + int(frame[-1]) > 10:
                score += 10
            else:
                score += int(frame[0]) + int(frame[-1])
        else:
            roll += 1
    return score