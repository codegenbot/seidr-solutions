```python
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            if game[i+1].isdigit():
                score += int(game[i]) + int(game[i+1])
                frame += 1
            else:
                score += int(game[i])
                if frame < 10:
                    score += int(game[i+1]) or 10 - int(game[i])
                    frame += 1
        elif game[i] == 'X':
            score += 10
            frame += 1
        elif game[i] == '/':
            first_roll = (int(game[:i].count('X')) * 10 + int(game[:i].count('/')) * 10) // 2
            second_roll = 10 - first_roll
            if game[i+1].isdigit():
                score += first_roll + second_roll + int(game[i+1])
                frame += 1
            else:
                score += first_roll + second_roll
                frame += 1
    return score