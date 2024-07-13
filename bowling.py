def bowling_score(game):
    score = 0
    game += ' '
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10 + int(bowling_score(game[i+1:]) if i < len(game)-1 else 0)
        elif game[i] == '-':
            first_roll, second_roll = map(int, game[i-1:i+2])
            score += first_roll + second_roll
        else:
            first_roll = int(game[i])
            second_roll = int(game[i+1]) if i < len(game)-1 else 0
            if first_roll == 10:
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
    return score

print(bowling_score("X1-1681357-0/XX7/4"))