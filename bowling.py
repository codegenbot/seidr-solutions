def bowling_score(score):
    frames = score.split("/")
    total_score = 0
    for i in range(0, len(frames), 2):
        if len(frames[i]) == 1:
            total_score += int(frames[i])
        elif len(frames[i]) > 1 and len(frames[i + 1]) > 1:
            total_score += 10 + int(frames[i][0])
        else:
            total_score += int(frames[i]) + int(frames[i + 1])
    return total_score