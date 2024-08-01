Here is the Python code to solve the problem:

```
def bowling_score(gutter):
    score = 0
    roll = gutter.replace('/', '')
    for i in range(0, 10*2, 2):
        if 'X' in roll[i:i+2]:
            score += 30 - (i // 2)
        elif roll[i] == roll[i+1] == '5':
            score += 20
        else:
            strike = False
            spare = False
            for j in range(i, i+2):
                if roll[j] == 'X':
                    strike = True
                elif roll[j] == '5':
                    spare = True
            if strike:
                score += 30 - (i // 2)
            elif spare:
                score += 20
            else:
                score += int(roll[i])
    return score