```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            first_roll = int(game[i])
            if i + 3 < len(game) and game[i+1].isdigit() and game[i+2].isdigit():
                second_roll = int(game[i+1] + game[i+2])
                if frame == 10:
                    score += max(first_roll, 10)
                    score += max(second_roll - first_roll, 0)
                else:
                    score += first_roll + second_roll
            elif i + 1 < len(game) and game[i+1].isdigit():
                second_roll = int(game[i+1])
                if frame == 10:
                    score += max(first_roll, 10)
                    score += max(second_roll - first_roll, 0)
                else:
                    score += first_roll + second_roll
            elif game[i] == 'X':
                score += 10
                frame += 1
            else:
                if frame == 10:
                    score += min(first_roll, 10) + (10 - first_roll)
                else:
                    score += first_roll
        else:
            if game[i] == 'X':
                score += 10
                frame += 1
            elif game[i] == '/':
                continue
            else:
                if frame == 10:
                    score += min(int(game[i]), 10) + (10 - int(game[i]))
                else:
                    score += int(game[i])
        frame += 1
    return score