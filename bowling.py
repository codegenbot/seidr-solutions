def bowling_score(s):
    score = 0
    roll = 0
    for i in range(10):
        if "/" in s[i * 2 : i * 2 + 1]:
            score_frame = 10 + int(s[i * 2 - 1]) + int(s[i * 2])
        else:
            score_frame = sum(int(x) for x in s[i * 2 : i * 2 + 2])
        roll += max(score_frame, 10)
    return roll