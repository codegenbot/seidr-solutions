Here is the solution:

def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            score += 30
            frame += 1
        elif bowling[i].isdigit() and (i + 3 < len(bowling) and bowling[i+3].isdigit()):
            strike_count = 2
            while i + strike_count <= len(bowling):
                if bowling[i + strike_count] == '/':
                    score += int(bowling[i]) + 10 - int(bowling[i + strike_count][1])
                    frame += 1
                    break
                strike_count += 1
        else:
            score += int(bowling[i]) + (10 if bowling[i+1] == '/' else int(bowling[i+1][1]))
            frame = min(frame, 10)
    return score