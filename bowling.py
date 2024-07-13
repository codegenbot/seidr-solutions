def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += sum(map(int, frame))
        else:
            strike = True
            first_roll = int(frame[0])
            second_roll = int(frame[-1])
            for i in range(2):
                if frame[i] != 'X':
                    roll = first_roll + second_roll
                    break
            if strike:
                score += 10 + roll
        roll = 0