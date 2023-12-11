def get_score(bowling_string):
    score = 0
    for i in range(len(bowling_string)):
        if bowling_string[i] == "X":
            score += 10
        elif bowling_string[i] == "/":
            score += 10 - int(bowling_string[i-1])
        else:
            score += int(bowling_string[i])
    return score