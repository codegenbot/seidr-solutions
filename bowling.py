def bowling_score(bowls):
    score = 0
    frames = [b if b != "X" else 10 for b in bowls]
    for i in range(0, len(frames), 2):
        if frames[i] == 10:
            score += 10 + sum(frames[i + 1 : i + 3])
        elif frames[i] + frames[i + 1] == 10:
            score += 10 + frames[i + 2]
        else:
            score += frames[i] + frames[i + 1]
    return score