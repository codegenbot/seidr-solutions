def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.replace("/", ""):
        if frame.isdigit():
            if len(frame) == 1:
                score += int(frame)
                roll += 1
            elif len(frame) == 2:
                score += int(frame[0]) + int(frame[1])
                roll += 1
            else:
                raise ValueError("Invalid game string")
        else:
            if frame == "X":
                score += 10
                roll += 1
            elif frame == "-":
                continue
            else:
                raise ValueError("Invalid game string")
    return score