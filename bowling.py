```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame < 10 and len(frames) - frame * 2 > 1:
                if frames[frame*2-1] == '/':
                    score += 10
                    frame += 1
                else:
                    score += int(frames[frame*2-1])
                    frame += 1
        elif char == '/':
            score += 10
            frame += 1
    return score