```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame < 10 and (int(char) == 10 or int(char) + 1 > 10):
                score -= (10 - int(char))
                frame += 1
        elif char == '/':
            score += 10
            frame += 1
    return score