```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            strike = False
            if game[i+1] == 'X':
                strike = True
            elif game[i+1].isdigit() and int(game[i+1]) < 10:
                balls = int(game[i+1])
            else:
                continue
            if frame > 9:
                score += min(10, balls)
            else:
                if strike:
                    score += 10 + sum(map(int, game[2*i:]))
                elif balls == 10:
                    score += 10 + sum(map(int, game[i+2:i+4]))
                else:
                    score += balls
        frame += (1 if not strike else 0)
    return score