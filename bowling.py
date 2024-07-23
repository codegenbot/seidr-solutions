def bowling_score(game):
    frames = game.split('/')
    score = 0
    for i, frame in enumerate(frames):
        if frame == 'X':
            if i < 9:
                score += 30
            else:
                score += 10 + int(frames[i-1]) * 2
        elif frame[0] == '-':
            spare = True
            for roll in frame[1:].split('-'):
                if roll:
                    if spare:
                        score += int(roll) + 1
                        spare = False
                    else:
                        score += int(roll)
        else:
            rolls = [int(x) for x in frame.split('-')]
            score += sum(rolls)
    return score