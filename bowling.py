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
                score += sum(map(int, [next_frame[0]] + next_frame[1:]))
            else:
                if len(game.split('/')[game.split('/').index(frame)+1]) > 1 and int(game.split('/')[game.split('/').index(frame)+1][0]) + int(game.split('[game.split('/').index(frame)+1][1]) < 10:
                    score += first_roll + int(game.split('/')[game.split('/').index(frame)+1][1])
                else:
                    next_rolls = map(int, game.split('/')[game.split('/').index(frame)+1].split()[:2])
                    score += sum(next_rolls)
                roll += 1
    return score if roll == 10 else 100