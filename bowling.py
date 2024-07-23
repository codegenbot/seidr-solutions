```Python
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0

    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            if i < len(frames) - 2 and frames[i+1] in 'X/':
                score += 20
            elif i < len(frames) - 1:
                try:
                    next_frame = int(frames[i+1].lstrip('/').replace('-', '')) + (10 if frame != 10 else 0)
                    if frame == 9 and sum(int(x) for x in frames[i:i+2]) > 10:
                        score += 10
                    else:
                        score += next_frame
                except ValueError:
                    pass
            frame = min(frame+1, 10)
        elif frames[i] in '123456789':
            if i < len(frames) - 1 and frames[i+1] == '/':
                try:
                    next_frame = int(frames[i+2].lstrip('/').replace('-', '')) + (10 if frame != 10 else 0)
                    score += 10 + next_frame
                except ValueError:
                    pass
            elif sum(int(x) for x in frames[i:i+1]) == 10 or i < len(frames) - 1 and sum(int(x) for x in frames[i:i+2]) > 10:
                if i < len(frames) - 1 and sum(int(x) for x in frames[i:i+2]) <= 10:
                    score += int(frames[i].lstrip('/').replace('-', ''))
                elif i < len(frames) - 1 and sum(int(x) for x in frames[i:i+2]) > 10:
                    if frame == 9:
                        score += 10
                    else:
                        try:
                            next_frame = int(frames[i+1].lstrip('/').replace('-', '')) + (10 if frame != 10 else 0)
                            score += 10 + next_frame
                        except ValueError:
                            pass
                frame = min(frame+1, 10)
            else:
                score += sum(int(x) for x in frames[i])
        i += 1

    return score