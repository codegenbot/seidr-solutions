```
def bowling_score(frames):
    score = 0
    frame_score = [0] * 10
    for i, frame in enumerate(frames.split('/')):
        if frame == 'X':
            if i < 9:
                score += 30 + (10 - len(frame_score))
            else:
                score += 30
        elif frame == '':
            if i > 0:
                score += 10 + sum(frame_score)
            break
        else:
            strike = 0
            spare = 0
            for char in frame:
                if char == 'X':
                    strike += 10
                elif char.isdigit():
                    frame_score[i] += int(char)
                    if i < 8 and not strike:
                        spare = int(char)
            if strike:
                score += 10 + max(frame_score[:i])
            elif spare:
                score += 10 + spare
    return score