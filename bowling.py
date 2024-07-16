```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in range(10):
        if game[roll] == 'X':
            score += 10 + (10 - int(game[roll-1:])) * 2
            roll += 3
        elif '/' in game[roll:roll+2]:
            strike, spare = map(int, game[roll:roll+2].split('/'))
            if frame < 9:
                score += strike + spare + (10 - int(game[roll+1])) * 2
            else:
                score += strike + spare + int(game[roll+1])
            roll += 3
        elif game[roll] == 'X' and game[roll+1] != 'X':
            score += 10 + int(game[roll+1]) + (10 - int(game[roll-1:])) * 2
            roll += 4
        else:
            score += 2 * int(game[roll])
            roll += 3
    return score