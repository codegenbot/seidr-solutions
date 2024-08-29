```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            if frame < 10:
                score += 30
            else:
                score += 10
            frame += 1
        elif game[i] == '/':
            first_roll = int(game[:i].count('X')) * 10 + int(game[:i].count('/')) * 10 // 2
            second_roll = 10 - first_roll
            if frame < 9:
                score += first_roll + second_roll
            else:
                score += first_roll + max(second_roll, 10)
            frame += 1
        else:
            first_roll = int(game[i])
            second_roll = 10 - int(first_roll)
            if frame == 10:
                if game[i+1] != 'X':
                    score += first_roll + min(second_roll, int(game[i+1]))
                else:
                    score += first_roll + 10
            elif frame < 9:
                score += first_roll + second_roll
            else:
                if game[i+1] == 'X':
                    score += first_roll + 10
                else:
                    score += first_roll + min(second_roll, int(game[i+1]))
            frame += 1
    return score