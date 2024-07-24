```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            if len(str(frame)) == 2:
                score += 10
            else:
                score += int(char)
            frame += 1
        elif char == '/':
            score += 10 - int(frames[frames.index(char) - 1])
            frame += 1
    return score