```
def bowling_score(games):
    score = 0
    game = [int(x) for x in re.split('([0-9X-])', games)[1::2]]
    for i in range(10):
        if game[i] == X:
            game[i] = 10 - sum(game[:i])
        elif game[i] < 10 and 'X' in game[i:i+2]:
            game[i] = 10
        score += max(game[i], 0)
    return score