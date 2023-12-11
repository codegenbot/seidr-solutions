def get_score(bowling_string):
    total_score = 0
    for i in range(len(bowling_string)):
        if bowling_string[i] == 'X':
            total_score += 10
        elif bowling_string[i] == '/':
            total_score += 10
        else:
            total_score += int(bowling_string[i])
    return total_score