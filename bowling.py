def bowling_score(score_string):
    frames = score_string.split("/")
    score = 0
    for i in range(len(frames)):
        if len(frames[i]) == 1:
            score += 10
        elif len(frames[i]) == 2:
            score += int(frames[i])
        else:
            score += 10 + int(frames[i][:-1])
    return score