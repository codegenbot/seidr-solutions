def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1 or (len(frame) > 1 and int(frame[0]) + int(frame[1]) >= 10):
            if len(frame) > 1:
                score += 10
            else:
                score += int(frame)
            roll = 0
        elif frame[0] != "X":
            strike = False
            for char in frame:
                if char == "X":
                    strike = True
            if strike:
                score += 30
            else:
                score += 10 + int(frame[0])
        else:
            score += 10
        roll += 1
    return score