```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames.split('/'):
        if len(frame) == 1 or (len(frame) > 1 and int(frame[0]) + int(frame[1]) <= 10):
            if len(frame) > 1:
                score += 10
            else:
                score += int(frame)
        elif len(frame) > 2:
            strike = True
            for i, x in enumerate(map(int, frame)):
                if i < 2 or (i == 2 and x != 10):
                    score += x
                    if not strike: 
                        break
                    strike = False
        else:
            spare = True
            for i, x in enumerate(map(int, frame)):
                if i >= 1:
                    score += x
                    if not spare: 
                        break
                    spare = False
    return score