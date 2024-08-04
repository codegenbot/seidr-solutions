```
def bowling_score(bowling):
    score = 0
    frame = 1
    in_play = False
    spare = False
    strike = False
    
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            strike = True
            continue
        
        if bowling[i].isdigit():
            if not in_play:
                score += int(bowling[i-1])
                if frame < 9 and (bowling[i-2].isdigit() or bowling[i-2] == '/'):
                    in_play = True
                else:
                    frame += 1
            elif strike and not spare:
                score += 10 + int(bowling[i])
                strike = False
                in_play = False
                frame += 1
            else:
                if bowling[i] == '/':
                    score += 10 - int(bowling[i-1])
                    spare = True
                    continue
                
                if spare and not strike:
                    score += 10 + int(bowling[i])
                    spare = False
                    in_play = False
                    frame += 1
                
                score += int(bowling[i])
    
    return score