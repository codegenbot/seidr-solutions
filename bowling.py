```
def bowling_score(game):
    score = 0
    roll = []
    for i in range(1, len(game)+1):
        if game[i-1] == 'X':
            score += 10 + (10 - sum(map(int, roll))) if roll else 10
            roll = []
        elif game[i-1] == '/':
            score += 10 + (10 - sum(map(int, roll)))
            roll = []
        else:
            roll.append(game[i-1])
    return score