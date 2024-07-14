```
def bowling_score(bowling_string):
    score = 0
    frame = 1
    for i in range(0, len(bowling_string), 2):
        if bowling_string[i].isdigit():
            if bowling_string[i+1].isdigit():
                score += int(bowling_string[i:i+2])
            else:
                score += int(bowling_string[i])
        elif bowling_string[i] == 'X':
            score += 10
            frame -= 1
        elif bowling_string[i] == '-':
            continue
    return score