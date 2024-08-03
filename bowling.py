```
def bowling_score(roll):
    score = 0
    roll = roll.replace('-', '0')

    for i in range(len(roll) // 2):
        if '/' in str(roll[i*2:i*2+2]):
            strike, spare = map(int, str(roll[i*2:i*2+2]).replace('/', ''))
            score += strike + spare
        elif roll[i*2+1] == 'X':
            score += 10 + int(roll[-1])
        else:
            if roll[i*2] == 'X':
                score += 10
            elif int(roll[i*2]) + int(roll[i*2+1]) >= 10:
                score += 10
            else:
                score += int(roll[i*2]) + int(roll[i*2+1])

    return score