def bowling_score(game):
    score = 0
    game = game.rstrip()
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10 + int(bowling_score(game[i+1:]) if i < len(game)-1 else 0)
        elif game[i] == '-':
            if i < len(game) - 2 and game[i+2].isdigit():
                first_roll, second_roll = map(int, [c for c in game[i-1:i+3][::-1] if c.isdigit()][::-1])
                score += first_roll + second_roll
            else:
                score += 10
        else:
            if game[i].isdigit():
                first_roll = int(game[i])
            else:
                first_roll = 10

            if i < len(game)-1 and game[i+1].isdigit():
                second_roll = int(game[i+1])
            else:
                second_roll = 0

            if first_roll == 10:
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
    return score

print(bowling_score("X1-1681357-0/XX7/4"))