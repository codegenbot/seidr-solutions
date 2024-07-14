```
def bowling_score(bowling_game):
    score = 0
    game = [int(x) for x in re.sub('[/-X]', '', bowling_game)]
    for i in range(10):
        if len(game) > i:
            if game[i] == 10:
                score += 10 + sum(game[i+1:i+3]) if i < 8 else 0
            elif sum(game[i:i+2]) >= 10:
                score += 10
                game = game[:i] + [x-10 for x in game[i:]]
            else:
                score += game[i]
    return score