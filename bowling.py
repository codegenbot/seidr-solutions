Here is the solution:

def bowling_score(bowling_string):
    score = 0
    frame = 1
    for i in range(0, len(bowling_string), 2):
        if bowling_string[i].isdigit():
            strike = False
            if i < len(bowling_string) - 1 and bowling_string[i + 1] == '/':
                score += int(bowling_string[i]) * 10
                frame += 1
            else:
                score += int(bowling_string[i:i+2])
        elif bowling_string[i] == 'X':
            strike = True
            if i < len(bowling_string) - 1 and bowling_string[i + 1] == '/':
                score += 10 * (10 - frame)
                frame += 1
            else:
                score += 10 + int(bowling_string[i+2:i+4])
        elif bowling_string[i] == '-':
            continue
    return score