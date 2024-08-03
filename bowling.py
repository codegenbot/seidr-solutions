```
def bowling_score(frames):
    score = 0
    frame_number = 1
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
            frame_number += 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                score += 10
                frame_number += 1
            else:
                score += first_roll + second_roll
                frame_number += 1
        elif len(frame) > 2:
            first_roll = int(frame[:1])
            second_roll = int(frame[1:2])
            third_roll = int(frame[2:])
            if first_roll + second_roll == 10:
                score += 10 + third_roll
                frame_number += 1
            else:
                score += first_roll + second_roll
                frame_number += 1
    return score