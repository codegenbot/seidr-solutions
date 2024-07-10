```
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
                score += second_roll for second_roll in game.split('/')[game.split('/').index(frame)+1].split()[0]
            else:
                score += sum(game.split('/')[game.split('/').index(frame)+1].split()[:2])
                roll += 2
    return score if roll == 10 else 100