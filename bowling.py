def bowling_score(game):
    score = 0
    frames = game.split("/")
    for i, frame in enumerate(frames):
        if frame == "X":
            score += 30
        elif len(frame) == 2 and int(frame[1]) > 0:
            score += int(frame[0]) + 10
        else:
            score += sum(map(int, frame))
    return score