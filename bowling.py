```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            frame -= 1
        elif char == 'X':
            score += 10 + (10 * (9 - frame))
            frame = 0
        elif char == '/':
            score += 10
            frame -= 1
    return score