```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in frames.replace('/','0').replace('-X','00')]
    for i in range(0,10*2-1,2):
        if str(roll[i]).isdigit():
            if int(str(roll[i])) == 10:
                score += 10 + roll[i+1]
            else:
                score += int(str(roll[i])) + roll[i+1]
        elif str(roll[i]) == 'X':
            score += 10
        else:
            continue
    return score