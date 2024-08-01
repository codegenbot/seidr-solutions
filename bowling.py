```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if second_roll == 10:  # strike
                score += 10 + 10 + 10
                frame_index += 1
            else:  # spare
                score += first_roll + second_roll + 10
                frame_index += 2
        elif len(frame) > 2:
            rolls = list(map(int, frame))
            if sum(rolls) == 10:  # spare
                score += sum(rolls) + 10
                frame_index += 1
            else:  # open frames
                for roll in rolls:
                    if roll != 0:
                        score += roll
                    if frame_index < 9 and (score + roll >= 10):
                        break
                frame_index += 1
    return score