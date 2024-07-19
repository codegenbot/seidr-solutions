```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            if frame == 10:
                if int(char) == 10:
                    score += 10
                else:
                    score += 10 + int(char)
                break
            score += int(char)
            frame += 1
        elif char == '/':
            if int(frames[frames.index(char) - 1]) + int(frames[frames.index(char) + 1]) > 10:
                score += 10
            else:
                score += 10 - (int(frames[frames.index(char) - 1]) + int(frames[frames.index(char) + 1]))
            frame += 1
    return score