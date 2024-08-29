def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += 10
            roll += 1
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            if first_roll + second_roll == 10:
                score += 10
                roll += 2
            else:
                score += first_roll + second_roll
                roll += 2
        else:
            first_roll = int(frame[0]) + int(frame[1])
            if first_roll == 10:
                score += 10 + int(frame[2])
                roll += 3
            elif int(frame[1]) + int(frame[2]) == 10:
                score += int(frame[0]) + 10
                roll += 3
            else:
                score += first_roll + int(frame[2])
                roll += 3