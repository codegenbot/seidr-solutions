def bowling_game(game):
    frames = game.split("/")
    score = 0
    for i, frame in enumerate(frames):
        if frame.isdigit():
            strike_or_spare = None
            score += int(frame)
            if i < len(frames) - 1 and frames[i + 1].isdigit():
                strike_or_spare = "strike"
            elif i < len(frames) - 2 and frames[i + 2].isdigit():
                strike_or_spare = "spare"
            if strike_or_spare:
                score += int(
                    next(frame for frame in frames[i + 1 : i + 3] if frame.isdigit())
                )
        else:
            score += int(frame[0])
    return score