```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame < 10:
                frame += (int(char) == 10 and 2 or 1)
        elif char == '/':
            score += 10
            frame += 1
        else:
            if frame < 10:
                if score + 1 > 10:
                    score += 10 - score
                    frame += 1
                else:
                    score += 1
    return score