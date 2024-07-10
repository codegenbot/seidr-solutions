def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            score += first_roll + second_roll
            roll += 1
        else:
            first_roll = int(frame[0])
            score += first_roll
            if first_roll == 10:
                roll += 1
                next_frame = game.split('/')[game.split('/').index(frame)+1].split()
                if len(next_frame) > 1:
                    score += sum(map(int,next_frame[:2]))
                else:
                    score += int(next_frame[0])
            else:
                score += sum(map(int,frame[1:]))
            roll += 1
    return score