```
def bowling_score(rolls):
    score = 0
    roll = 0
    for frame in range(10):
        if len(rolls[roll:]) < 2:
            score += sum(int(x) for x in rolls[roll:])
            break
        elif rolls[roll:roll+2].count('X'):
            score += 30
            roll += 2
        else:
            strike = False
            while not strike:
                if len(rolls[roll:]) >= 2 and rolls[roll:roll+2] == '11':
                    score += 20
                    roll += 2
                    break
                elif len(rolls[roll:]) >= 1 and rolls[roll] == 'X':
                    score += 10 + sum(int(x) for x in rolls[roll+1:])
                    strike = True
                    roll += 1
                    break
                else:
                    score += int(rolls[roll]) + int(rolls[roll+1])
                    roll += 2
    return score