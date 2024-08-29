```
def bowling_score(bowling_game):
    score = 0
    roll = 0
    for frame in range(1,11):
        if bowling_game[roll:roll+2] == 'XX':
            score += 30
            roll += 2
        elif bowling_game[roll].isdigit():
            score += int(bowling_game[roll])
            roll += 1
        else:
            first_roll = int(bowling_game[roll])
            if frame < 10 and str(first_roll) + '/' in bowling_game[roll+1:]:
                second_roll = int(bowling_game[roll+1:roll+3].split('/')[0])
                score += first_roll + second_roll
                roll += 3
            else:
                score += first_roll + 10
                roll += 2
    return score