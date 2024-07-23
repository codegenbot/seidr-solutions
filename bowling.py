```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            if game[i+1].isdigit():
                score += int(game[i]) + int(game[i+1])
                frame += 1
            else:
                score += int(game[i]) + 10 - int(game[:i].count('/')) * 2
                frame += 1
        elif game[i] == 'X':
            score += 10
            if frame < 9:
                if game[i+2].isdigit():
                    score += int(game[i+1]) + int(game[i+2])
                else:
                    score += 10
                frame += 1
        elif game[i] == '/':
            first_roll = int(game[:i].count('X')) * 10 + int(game[:i].count('/')) * 5
            second_roll = 10 - first_roll
            if game[i+1].isdigit():
                score += first_roll + second_roll + int(game[i+1])
                frame += 1
            else:
                score += first_roll + second_roll
                frame += 1
    return score