```
def bowling_score(game):
    score = 0
    frame = 1
    while frame <= len(game):
        if game[frame*2-1:frame*2+2] in ['X', 'XX']:
            score += 10 + (10 - int(game[frame*2-1])) * 10
            frame += 1
        elif game[frames*2-1:frames*2] == 'X':
            score += 10
            frame += 1
        else:
            bonus = sum(int(i) for i in game[frame*2-1:frame*2+2])
            if bonus < 10:
                score += 1 * int(game[frame*2-1])
                score += 1 * int(game[frame*2]) if frame != len(game) else 0
            elif bonus == 10:
                score += 10
                frame += 1
        frames += 1
    return score