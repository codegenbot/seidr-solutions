def bowling_score(score):
    score = score.replace("/", "")
    frames = [int(x) for x in score]
    total = 0
    roll = 0
    for i in range(len(frames)):
        if i < 18 and (frames[i] == 10 or (i % 2 == 1 and frames[i] < 10)):
            roll += frames[i]
            if i < 17:
                roll += frames[i + 1]
            total += max(roll, 10)
            roll = 0
        elif i >= 18:
            break
    return total