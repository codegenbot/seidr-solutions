```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            strike = False
            if i + 1 < len(frames) and frames[i+1].isdigit():
                frame_score = int(frames[i:i+2])
                i += 2
            else:
                if frames[i] == 'X':
                    score += 10
                    strike = True
                    i += 1
                elif frames[i] == '/':
                    if i+1 < len(frames) and frames[i+1].isdigit():
                        frame_score = int(frames[i+1])
                    else:
                        frame_score = 10
                    i += 2
                else:
                    frame_score = int(frames[i])
                    i += 1
            if strike:
                score += frame_score
            else:
                if i + 1 < len(frames) and frames[i+1].isdigit():
                    frame_score += int(frames[i:i+2])
                elif i+2 < len(frames) and (frames[i+1] in ['X', '/']):
                    if frames[i+1] == 'X':
                        score += 10
                    else:
                        score += 10 - int(frames[i+1])
                    i += 2
        elif frames[i] == 'X' and i + 1 < len(frames) and (frames[i+1] in ['X', '/']):
            if frames[i+1] == 'X':
                score += 30
            else:
                score += 10 - int(frames[i+1])
            i += 2
        elif frames[i] == 'X' and i + 2 < len(frames) and (frames[i+2] in ['X', '/']):
            if frames[i+2] == 'X':
                score += 30
            else:
                score += 10 - int(frames[i+1])
            i += 3
        elif frames[i] == 'X' and i + 1 < len(frames) and frames[i+1] == 'X':
            score += 30
            i += 2
    return score

print(bowling_score("7-5/7/8-3/X-2/4-X/0-4/1-X/9-3/X-6/X-8/X-10"))