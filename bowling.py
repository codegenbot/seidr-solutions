def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            if i < len(frames) - 2 and frames[i+1] == 'X' and frames[i+2] == 'X':
                score += 30
            elif i < len(frames) - 1:
                try:
                    next_frame = int(frames[i+1].lstrip('/').replace('-', '')) + (10 if frame != 10 else 0)
                    score += next_frame
                except ValueError:
                    pass
            frame = min(frame+1, 10)
        elif frames[i] in '123456789':
            pins = sum(int(x) for x in frames[i].lstrip('/').replace('-', ''))
            score += pins
            if i < len(frames) - 1 and frames[i+1] == '/':
                try:
                    next_frame = int(frames[i+2].lstrip('/').replace('-', '')) + (10 if frame != 10 else 0)
                    score += next_frame
                except ValueError:
                    pass
            elif i < len(frames) - 1 and sum(int(x) for x in frames[i:i+2]) == 10 or frames[i] in '23456789':
                if frames[i] in '123456789':
                    score += int(frames[i].lstrip('/').replace('-', '')) + int(frames[i+1].lstrip('/').replace('-', ''))
                elif frames[i] == 'X':
                    score += 10
                    if i < len(frames) - 2 and (frames[i+1] in 'X/X' or frames[i+1] == 'X/'):
                        score += 20
                    frame = min(frame+1, 10)
        i += 1
    return score