```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char == 'X':
            score += 30
            frame += 1
        elif char == '/':
            score += 10
            frame += 1
        else:
            score += int(char)
            frame += 1
    return score