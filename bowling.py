```
def bowling_score(bowling_str):
    score = 0
    frame = 1
    for i in range(0, len(bowling_str), 2):
        if bowling_str[i].isdigit():
            strike = False
            if i < len(bowling_str) - 1 and bowling_str[i+1] == '/':
                score += 10 + int(bowling_str[i])
                frame += 1
            else:
                score += 10 + int(bowling_str[i:i+2])
                frame += 1
        elif bowling_str[i] == 'X':
            strike = True
            if i < len(bowling_str) - 1 and bowling_str[i+1] == 'X':
                score += 30
                frame += 1
            else:
                score += 10 + 10
                frame += 2
        elif bowling_str[i] == '-':
            continue
    return score