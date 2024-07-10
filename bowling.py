```
def bowling_score(game):
    score = 0
    game += '/' * (len(game) % 2)
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 30
        elif game[i] == '/':
            score += 10 + int(game[i+1])
        else:
            first_roll = int(game[i])
            second_roll = int(game[i+1])
            if first_roll + second_roll >= 10:
                score += 10 + int(game[i]) + int(game[i+1])
            else:
                score += first_roll + second_roll
    return score