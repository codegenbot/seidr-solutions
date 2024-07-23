```
def bowling_score(frames):
    score = 0
    frame = 0
    for char in frames:
        if char.isdigit():
            if len(str(frame)) < 2:
                str_frame = '10' if int(char) == 10 else str(int(char))
                score += 10
                frame += 1
            elif len(str(frame)) == 2 and int(char) != 0:
                score += int(char)
                frame += 1
        elif char == '/':
            score += 10 - (int(frames[frames.index(char) - 1]) + int(char))
            frame += 1
    return score