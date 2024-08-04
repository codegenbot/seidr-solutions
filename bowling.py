def bowling_score(game):
    score = 0
    roll = 0
    for frame in game:
        if "/" in frame:
            rolls = list(map(int, frame.split("/")))
            score += sum(rolls)
            roll += len(rolls)
        else:
            score += int(frame)
            roll += 1
        if roll == 2 and score < 100:
            score -= 2 * min(
                int(game[game.index(frame) + 1 :].split("/")[0]),
                int(game[game.index(frame) + 1 :].split("/")[1]),
            )
    return score