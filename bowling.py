```Python
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            sum = 0
            j = i
            while j < len(frames) and frames[j].isdigit():
                sum = sum*10 + int(frames[j])
                j += 1
            score += sum
            frame += (sum > 10)
            i = j
        elif frames[i] == '/':
            score += 10 - int(frames[i-1])
            frame += 1
            i += 2
    return score