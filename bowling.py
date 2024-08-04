```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            strike = False
            spare = False
            frame_score = int(frames[i]) + int(frames[i+1])
            if i < 9:
                if i == 8:
                    next_frame = frames[18]
                    if next_frame.isdigit():
                        score += int(next_frame)
                    else:
                        strike = True
                elif i > 0 and (frames[i-2].isdigit() or frames[i-1].isdigit()):
                    spare = True
            if not strike and not spare:
                score += frame_score
        elif frames[i] == 'X':
            score += 10 + int(frames[i+1])
            strike = True
        elif frames[i] == '/':
            score += 10 - int(frames[i-1])
            spare = True
    return score