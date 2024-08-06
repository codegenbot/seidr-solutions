```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            first_ball = int(game[i])
            if i + 3 < len(game) and game[i+1] == '/':
                second_ball = 10 - first_ball
            else:
                second_ball = int(game[i+1]) if game[i+1].isdigit() else 10
            score += first_ball + second_ball
            if frame < 9 and (first_ball + second_ball) < 10:
                score += 10
                frame -= 1
            elif frame < 10:
                score += min(first_ball + second_ball, 10)
                frame -= 1
        else:
            if first_ball == 10:
                score += 10
                frame -= 1
            else:
                score += min(10 - first_ball, int(game[i+1])) if i + 2 < len(game) and game[i+1].isdigit() else 10
                score += 10
                frame -= 1
    return score