```
def bowling_score(frames):
    score = 0
    frame = 0
    for char in frames:
        if char.isdigit():
            if len(char) == 1:
                score += int(char)
                frame += 1
            else:
                strike = int(char[0])
                score += strike + 10
                if frame < 9:
                    score += int(frames[frame+1].isdigit())
                frame += 1
        elif char == 'X':
            score += 10
            frame += 1
        elif char == '-':
            continue
    return score