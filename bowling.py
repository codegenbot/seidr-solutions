def bowling_score(game):
    score = 0
    roll = 0
    for frame in game:
        if "/" in frame:
            strike, spare = map(int, frame.split("/"))
            score += strike + spare
            if strike == 10:
                roll += 1
            elif spare == 10:
                if roll > 0 and sum(map(int, frame)) >= 10:
                    score += 10
                else:
                    score += 5
            else:
                score += strike + spare
        else:
            score += int(frame)
    return score