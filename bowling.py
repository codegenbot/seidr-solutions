```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames.split('/'):
        if len(frame) == 1 or (len(frame) == 2 and int(frame[0]) < 10):
            score += int(frame)
        elif len(frame) == 2:
            score += 10 + int(frames[frames.index(frame)+1:frames.index(frame)+3])
            frames = frames.replace(frame, 'X', 1)
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if first_roll + second_roll == 10:
                score += 10
            elif first_roll == 10:
                score += 10 + second_roll + third_roll
            else:
                score += 10 + first_roll + second_roll
        frame_count += 1
    return score