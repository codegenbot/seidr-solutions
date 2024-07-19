```python
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame == 10:
                break
            frame += 1
        elif char == '/':
            if int(frames[frames.index(char) - 1]) + int(frames[frames.index(char) + 1]) >= 10:
                score += 10 - (int(frames[frames.index(char) - 1]) + int(frames[frames.index(char) + 1]))
            else:
                score += 10
            frame += 1
    return score