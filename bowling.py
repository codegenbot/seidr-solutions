```
def bowling_score(bowling_game):
    score = 0
    roll = 0
    for frame in range(10):
        if bowling_game[roll:roll+2] in ['XX', 'X/']:
            score += 30
            roll += 1
        elif bowling_game[roll].isdigit() and len(bowling_game[roll:]) >= 3:
            strike = True
            for i in range(3):
                if bowling_game[roll+i].isdigit():
                    if strike:
                        score += int(bowling_game[roll+i])
                    else:
                        if i == 0:
                            score += int(bowling_game[roll+i]) * 2
                        elif i == 1 and frame < 9:
                            score += int(bowling_game[roll+i]) + score // 10
                    roll += i + 1
                    break
                else:
                    if strike:
                        score += 10
                        roll += 3
                        break
            if strike:
                continue
        elif bowling_game[roll].isdigit() and len(bowling_game[roll:]) >= 2:
            spare = True
            for i in range(2):
                if bowling_game[roll+i].isdigit():
                    if spare:
                        score += int(bowling_game[roll+i]) + score // 10
                    else:
                        score += int(bowling_game[roll+i])
                    roll += i + 1
                    break
        return score