def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1:
            strike = True
            continue
        if frame[0] == "X":
            strike = True
            roll += 10
        else:
            strike = False
            frame_score = int(frame[0])
            if len(frame) > 1:
                frame_score += int(frame[1])
            if not strike and frame_score < 10:
                score += 1 * (frame_score + int(game[roll + 2 : roll + 3]))
            else:
                score += frame_score
            roll += 1
    if strike:
        score += 10
    return score