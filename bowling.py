```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            if int(char) == 10:
                score += 10
                frame += 1
            else:
                if frame < 10:
                    if len(frames[frames.index(char)+1:frames.index(char)+2].lstrip(' ')) > 0 and frames[frames.index(char)+1:frames.index(char)+2][0].isdigit():
                        score += int(char) + int(frames[frames.index(char)+1:frames.index(char)+2])
                        frame += 1
                    else:
                        score += int(char)
                        frame += 1
        elif char == '/':
            if frame < 10:
                score += 10 - (10 - int(frames[frames.index(char)-1:frames.index(char)]))
                frame += 1
            else:
                score += 10
                frame += 1
    return score