```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i].isdigit():
            if game[i] == 'X':
                score += 10 + (10 if frame < 9 else 0)
                frame += 1
            elif game[i] == '/':
                first_roll = int(game[:i-1])
                second_roll = 10 - first_roll
                score += first_roll + second_roll
                frame += 1
                game = game[i+1:]
            else:
                if frame < 9 and game[i:i+2].isdigit() and int(game[i:i+2]) <= 10:
                    first_roll = int(game[i-2:i])
                    second_roll = 10 - first_roll
                    score += first_roll + second_roll
                    frame += 1
                    game = game[i+2:]
                else:
                    first_roll = int(game[i-1])
                    score += first_roll
                    frame += 1
    return score