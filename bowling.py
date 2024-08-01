```
def bowling_score(frames):
    score = 0
    frame_count = 1
    for frame in frames.split('/'):
        if len(frame) == 2 and frame[0].isdigit() and frame[1] == 'X':
            score += 10 + (10 - int(frame[0])) * 2
            frame_count -= 1
        elif len(frame) == 2:
            score += sum(int(x) for x in frame)
            frame_count -= 1
        else:
            strike = False
            if frame[0] == 'X':
                strike = True
            if not strike:
                score += int(frame[0])
                if len(frames.split('/')) - 1 > frame_count and frames.split('/')[frame_count][0] != 'X':
                    score += int(frames.split('/')[frame_count][0])
                else:
                    score += 10
                frame_count -= 1
            elif strike:
                score += 10
    return score