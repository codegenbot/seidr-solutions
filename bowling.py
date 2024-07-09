def bowling_score(game):
    frames = game.split("/")
    score = 0
    for i in range(0, len(frames), 2):
        if len(frames[i]) == 1:
            score += 10 + int(frames[i + 1])
        elif len(frames[i]) == 2:
            score += 10 + int(frames[i + 1])
        else:
            strike = 0
            while i < len(frames) and frames[i].count("X") > 0:
                if i + 3 < len(frames):
                    score += 10 + int(frames[i + 1]) + int(frames[i + 2])
                elif i + 1 < len(frames):
                    score += 10 + int(frames[i + 1])
                else:
                    score += 10
                strike += 10
                i += 1
    return score