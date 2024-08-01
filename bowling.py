def bowling_game(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1 or (len(frame) > 1 and int(frame[0]) + int(frame[1]) >= 10):
            if len(frame) > 1:
                score += 10 - int(frame[0])
                roll -= 1
            else:
                score += int(frame[0])
        elif int(frame[0]) == 10:
            score += 10 + 2 * (10 - int(frame[0]))
            roll -= 1
        else:
            first_roll = int(frame[0])
            if roll > 0:
                score += first_roll
            second_roll = int(frame[1])
            if roll > 0 and first_roll + second_roll < 10:
                score += 10 - (first_roll + second_roll)
            elif roll == 0 and first_roll + second_roll == 10:
                score += 10
            else:
                score += first_roll + second_roll
        roll -= 1
    return score