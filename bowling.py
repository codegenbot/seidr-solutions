```Python
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if frame == 10:
                score += int(frames[i])
                i += 1
                break
            else:
                score += int(frames[i])
                frame += 1
        elif frames[i] == '/':
            first = int(frames[i-1]) 
            second = int(frames[i+1])
            if first + second >= 10:
                score += 10 - (first + second)
            else:
                score += 10
            i += 2
            frame += 1
    return score