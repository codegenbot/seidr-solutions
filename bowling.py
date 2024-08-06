```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            if len(str(frame)) == 2:
                score += int(char)
            else:
                score += int(char) + 10
            frame += 1
        elif char == '/':
            score += 10
            frame += 1
        elif char == 'X':
            score += 10
            frame += 1
        elif char == '-':
            continue
    return score