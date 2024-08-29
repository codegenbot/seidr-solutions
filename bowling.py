```
def bowling_score(bowling_string):
    frames = [list(map(int, re.findall('\d', frame))) for frame in [bowling_string[i:i+2] for i in range(0, len(bowling_string), 2)]]
    score = 0
    strike = 0
    spare = False
    
    for i in range(len(frames)):
        if i < 9 and frames[i][1] == 'X':
            strike += 10
            score += sum(frames[i])
        elif len(frames) - i > 2 and frames[i][0] + frames[i][1] == '10' and not spare:
            score += 10 + sum(frames[i+1:i+3])
            spare = True
        else:
            score += sum(frames[i])
    
    if strike < 2:
        if spare:
            score += 10
        elif len(frames) - 9 > 0:
            score += sum(frames[-1])
    
    return score