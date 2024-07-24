```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif frame[0] == 'X':
            score += 10 + int(frames.split('/')[frame_count+1].split('X')[0]) * 2 if frame_count < 8 else 10
        else:
            strike = False
            if frame[0] == 'X':
                strike = True
            elif int(frame) > 9:
                score += int(frame)
                frame_count += 1
                continue
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if strike:
                score += 10 + first_roll
            else:
                score += first_roll + second_roll
        frame_count += 1
    return score