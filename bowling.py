Here is the solution in Python:

def bowling_score(frames):
    score = 0
    frame_number = 1
    for frame in frames.split('/'):
        if len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame_number += 1
        else:
            roll = int(frame)
            score += roll
            frame_number += 1
    return score