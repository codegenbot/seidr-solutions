```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if i + 1 < len(frames) and frames[i+1].isdigit():
                score += int(frames[i:i+2])
                i += 2
            else:
                if frames[i] == 'X':
                    if i+2 >= len(frames) or frames[i+2] in ['X', '/']:
                        if i+1 < len(frames) and frames[i+1].isdigit():
                            score += 10 + (10 - int(frames[i+1]))
                        else:
                            score += 25
                    else:
                        score += 10 + int(frames[i+2:i+4])
                    i += 3
                elif frames[i] == '/':
                    if i+1 < len(frames) and frames[i+1].isdigit():
                        score += 10 + int(frames[i+1])
                    else:
                        score += 10
                    i += 2
        elif frames[i] == 'X':
            if i+2 < len(frames) and (frames[i+1] in ['X', '/']):
                score += 30
            else:
                if i+3 >= len(frames) or frames[i+2] in ['X', '/']:
                    if i+1 < len(frames) and frames[i+1].isdigit():
                        score += 10 + (10 - int(frames[i+1]))
                    else:
                        score += 25
                else:
                    score += 10 + int(frames[i+2:i+4])
            i += 3
        elif frames[i] == 'X' and i+1 < len(frames) and frames[i+1] == 'X':
            score += 30
            i += 2
    return score

print(bowling_score("7-5/7/8-3/X-2/4-X/0-4/1-X/9-3/X-6/X-8/X-10"))