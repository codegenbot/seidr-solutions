```
def bowling_score(game):
    score = 0
    for i in range(10):
        if game[i] == 'X':
            score += 30
        elif game[i] == '/':
            first_roll = int(game[:i].count('X')) * 10 + int(game[:i].count('5')) * 5
            second_roll = 10 - first_roll
            score += first_roll + second_roll
        else:
            if i < 8 and game[i] == '5' and game[i+1] == '/':
                score += 15
            elif i < 9 and game[i] == '5' and game[i+1] == 'X':
                score += 25
            else:
                score += int(game[i])
    return score