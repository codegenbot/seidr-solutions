def bowling_game(s):
    score = 0
    roll = 0
    for frame in s.split("/"):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            score += int(frame[0]) + 10
            roll += 1
        else:
            strike = int(frame[0])
            score += strike + 10
            if roll < 9:
                next_roll = int(frame[1:])
                if next_roll == 10:
                    score += 15
                    roll += 2
                else:
                    score += next_roll
                    roll += 2
    return score