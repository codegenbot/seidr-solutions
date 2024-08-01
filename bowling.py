Here is the solution:

def bowling_score(bowling_str):
    score = 0
    roll = 0
    for char in bowling_str:
        if char.isdigit():
            roll = int(char)
        elif char == '/':
            if roll < 10:
                score += 10 - roll
            else:
                score += roll
            roll = 0
        else:
            if roll > 0:
                score += roll
            roll = sum(map(int, str(char)))
    if roll > 0:
        score += roll
    return score