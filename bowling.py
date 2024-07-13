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
            while game[i].isdigit() == False and game[i] not in ['X', '-']:
                i += 1
            if i >= len(game) - 1:
                break
            first_roll = int(game[i])
            if i < len(game)-2 and game[i+1].isdigit() and game[i+2] in ['X', '/']:
                continue
            second_roll = int(game[i+1]) if i < len(game)-2 else 0
            score += first_roll + second_roll
    return score

print(bowling_score("X1-1681357-0/XX7/4"))