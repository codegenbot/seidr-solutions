```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    while frame <= 10:
        if game[roll] == 'X':
            score += 10
            roll += 2
            frame += 1
        elif '/' in game[roll]:
            parts = [int(x) for x in game[roll].split('/')]
            score += sum(parts)
            roll += 2
            frame += 1
        else:
            if roll < len(game) - 1 and game[roll] == game[roll + 1] == 'X':
                score += 10
                roll += 2
            elif int(game[roll]) >= 5:
                score += sum([int(x) for x in game[roll:roll+2]])
                roll += 2
            else:
                score += int(game[roll])
                roll += 1
    return score