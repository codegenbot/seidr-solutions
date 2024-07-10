```
def bowling_score(game):
    score = 0
    roll = 0
    game = game.replace('/', ' ').replace('X', '00').replace('-', '0')
    for frame in game.split():
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            score += first_roll + second_roll
            roll += 1
        else:
            first_roll = int(frame[0])
            if first_roll == 10:
                score += first_roll
                roll += 1
                if len(game.split()[game.index(frame)+1]) > 2:
                    next_frame = game.split()[game.index(frame)+1]
                    score += sum(map(int, [next_frame[0], next_frame[1]]))
            else:
                score += first_roll + int(frame[1])
                roll += 2
    return score if roll == 10 else 100