Here is the Python solution:

def bowling_score(bowling_game):
    score = 0
    roll = 0
    for i in range(10):
        if '/' in str(i+1)+str(bowling_game[i]):
            a,b = map(int,str(bowling_game[i]).split('/'))
            score += a + b
            roll += 2
        else:
            score += int(str(i+1)+str(bowling_game[i]))
            roll += 1
    return score