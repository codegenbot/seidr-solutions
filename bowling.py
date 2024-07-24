```
def bowling_score(frames):
    score = 0
    frame_number = 1
    for i in range(len(frames)):
        if frames[i].isdigit():
            strike = False
            while i + 2 <= len(frames) and frames[i:i+3].lstrip('0').isdigit() == '0':
                i += 2
                strike = True
            if not strike:
                score += int(frames[i])
                if frame_number < 10:
                    score += int(frames[i])
            elif frame_number < 10:
                score += 10
        else:
            frame_number += 1
    return score