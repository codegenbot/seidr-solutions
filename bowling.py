```
def bowling_score(bowling_game):
    score = 0
    roll = 0
    for frame in range(1, 11):
        if bowling_game[roll:roll+2] == 'X':
            score += 10 + (10 - int(bowling_game[roll-1])) if roll > 0 else 10
            roll += 2
        elif bowling_game[roll] != '/':
            strike = False
            for i in range(2):
                if bowling_game[roll+i] == 'X':
                    score += 10 + (10 - int(bowling_game[roll-1])) if roll > 0 else 10
                    strike = True
                    break
                elif bowling_game[roll+i] != '/':
                    score += int(bowling_game[roll+i])
            roll += i+1
        else:
            parts = [int(x) for x in bowling_game[roll:].split('/')]
            score += sum(parts[:2])
            roll += 3
    return score