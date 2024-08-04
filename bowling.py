```
def bowling_score(frames):
    score = 0
    frame = 0
    for char in frames:
        if char.isdigit():
            if len(str(frame)) < 2:
                str_frame = '0' + str(frame)
            else:
                str_frame = str(frame)
            if int(char) == 10:
                score += 10 + (10 if frame < 9 else 0)
                frame += 1
            elif int(char) + int(frames[frames.index(char)+1]) <= 10:
                score += int(char) + int(frames[frames.index(char)+1])
                frame += 2
                frames = frames.replace(char, '', 1).replace(frames[frames.index(char)+1], '', 1)
            else:
                score += int(char)
                frame += 1
        elif char == 'X':
            score += 10
            frame += 1
        elif char == '/':
            continue
    return score