```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i+1].isdigit():
            score += int(game[i:i+2])
            frame += (game[i:i+2] != '10')
        elif game[i] == 'X':
            score += 10
            frame += 1
            if i + 2 < len(game) and game[i+1] == 'X' and game[i+2].isdigit():
                score += int(game[i+2])
                frame += 1
            elif i + 2 < len(game) and game[i+1] == '/':
                first_roll = 10 - int(game[i+2])
                if first_roll > 0:
                    score += first_roll
                    frame += 1
        elif game[i] == '/':
            first_roll = 10 / 2
            if i + 1 < len(game) and game[i+1].isdigit():
                second_roll = int(game[i+1])
            else:
                second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
    return score