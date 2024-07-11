```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames) - 1:
        if frames[i].isdigit() and frames[i+1].isdigit():
            score += int(frames[i:i+2])
            i += 2
        elif frames[i] == 'X':
            if i+1 < len(frames) and (frames[i+1] in ['X', '/']):
                score += 30
            else:
                if i+2 >= len(frames) or (frames[i+2] in ['X', '/'] and i+2 < len(frames)):
                    if i+1 < len(frames) and frames[i+1].isdigit():
                        score += 10 + (10 - int(frames[i+1]))
                    else:
                        score += 25
                else:
                    score += 20
            i += 3
        elif frames[i] == '/':
            if i+1 < len(frames) and frames[i+1].isdigit():
                score += 10 + int(frames[i+1])
            else:
                score += 10
            i += 2
    return score

print(bowling_score("7-5/7/8-3/X-2/4-X/0-4/1-X/9-3/X-6/X-8/X-10"))