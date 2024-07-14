```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i] == 'X':
            score += 30
            frame += 1
        elif game[i].isdigit() and (i+2 < len(game) and game[i+1] == '/'):
            first_roll = int(game[i])
            second_roll = int(game[i+2]) - 5
            score += first_roll + second_roll
            frame += 1
        else:
            if i % 2 == 0:
                first_roll = int(game[i])
                if i < len(game) - 1 and game[i+1] in ['X', '/']:
                    continue
                elif i < len(game) - 1 and game[i+1].isdigit():
                    second_roll = int(game[i+1]) - 5
                    score += first_roll + second_roll
                else:
                    score += first_roll
            else:
                if game[i] == 'X':
                    score += 10
                elif game[i].isdigit():
                    score += int(game[i]) - 5
            frame += 1
    return score