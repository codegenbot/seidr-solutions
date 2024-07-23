def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10
            if i < len(frames) - 2 and frames[i+1] == 'X' and frames[i+2] == 'X':
                score += 30
            elif i < len(frames) - 1:
                try:
                    score += int(frames[i+1].lstrip('/').replace('-', '')) + (10 if frame != 10 else 0)
                except ValueError:
                    pass
            frame = min(frame+1, 10)
        elif frames[i] in '123456789':
            pins = sum(int(x) for x in frames[i].lstrip('/').replace('-', ''))
            score += pins
            if i < len(frames) - 1 and frames[i+1] == '/':
                try:
                    score += int(frames[i+2].lstrip('/').replace('-', '')) + (10 if frame != 10 else 0)
                except ValueError:
                    pass
            elif i < len(frames) - 1 and sum(int(x) for x in frames[i+1:]) >= 10:
                score += 10
                frame = min(frame+1, 10)
            frame += 1
    return score