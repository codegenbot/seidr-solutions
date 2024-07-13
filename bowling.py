```
def bowling_score(games):
    score = 0
    game = []
    
    for i in range(len(games)):
        if games[i].isdigit():
            game.append(int(games[i]))
        elif games[i] == '/':
            score += min(game)
            game = []
        elif games[i] == 'X':
            score += 30
            game = []
        else:
            if len(game) > 1 and sum(game) == 10:
                score += 10
            else:
                score += sum(game)
            game = []
    
    if len(game) > 0:
        if len(game) == 2 and sum(game) == 10:
            score += 10
        elif min(game) < 10:
            score += min(game)
        else:
            score += sum(game)
    
    return score