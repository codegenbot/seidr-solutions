def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1:
            score += int(frame) * 10
        elif len(frame) == 2:
            score += (int(frame[0]) + int(frame[1])) * 10
        else:
            while roll < int(frame):
                if roll < 10:
                    score += 10
                else:
                    score += 10 - (roll % 10)
                roll += 1
    return score