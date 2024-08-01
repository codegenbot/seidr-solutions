```
def bowling_game(bowling_score):
    score = 0
    roll = 0
    for frame in range(10):
        if bowling_score[roll] == 'X':
            score += 30
            roll += 2
        elif bowling_score[roll:roll+2].count('X') > 0:
            if bowling_score[roll:roll+3][1] == '/':
                score += int(bowling_score[roll:roll+3][:1]) + 10
            else:
                score += 20 + int(bowling_score[roll:roll+2].replace('X', '0'))
            roll += 2
        elif bowling_score[roll] == '/':
            score += int(bowling_score[roll:roll+3][:1])
            roll += 2
        else:
            if str(int(bowling_score[roll]) + int(bowling_score[roll+1])) in ['11', '12', '13', '14', '15']:
                score += 20 + int(bowling_score[roll:roll+2])
            elif bowling_score[roll] == '0' and bowling_score[roll+1] == 'X':
                score += 10
            else:
                score += int(bowling_score[roll]) + int(bowling_score[roll+1])
            roll += 2
    return score