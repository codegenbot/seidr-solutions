```
def bowling_score(bowling):
    score = 0
    roll = 0
    for frame in range(1, 11):
        if len(bowling) > 0:
            if bowling[0] == 'X':
                score += 10 + (10 - int(bowling[:2].strip('/'))) * 2
                bowling = ''
            elif '/' in bowling:
                first_roll = int(bowling[:1])
                second_roll = 10 - first_roll
                score += first_roll + second_roll
                bowling = ''
            else:
                if len(bowling) >= 2 and bowling[:2].isdigit():
                    first_roll = int(bowling[:2])
                    bowling = ''
                elif len(bowling) > 0:
                    first_roll = int(bowling[0])
                    bowling = ''
                score += first_roll
        roll += 1
    return score