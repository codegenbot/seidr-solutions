def bowling_score(game):
    score = 0
    game += "/00"
    frames = [int(x) for x in re.split("/|X", game)]
    for i in range(0, len(frames), 2):
        if frames[i] == 10:
            score += 10 + frames[i + 1]
        elif frames[i] + frames[i + 1] == 10:
            score += 10
        else:
            score += frames[i] + frames[i + 1]
    return score