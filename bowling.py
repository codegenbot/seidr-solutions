```
def bowling_score(bowling_string):
    score = 0
    frame_count = 0
    for i in range(0, len(bowling_string), 2):
        if bowling_string[i:i+2] == "X":
            score += 10 + (10 - int(bowling_string[:i].count("X"))) * 10
            frame_count += 1
        elif bowling_string[i:i+2].isdigit():
            strike = int(bowling_string[i:i+2]) + int(bowling_string[i+1])
            score += strike
            if strike == 10:
                frame_count += 1
        else:
            score += int(bowling_string[i])
    return score