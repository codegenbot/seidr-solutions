def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            if frame_num < 9 and frames[frames.index(frame) + 1].isdigit():
                score += int(frames[frames.index(frame) + 1])
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = 10 - first_roll - second_roll
            score += first_roll + second_roll + third_roll
            frame_num += 1
    return score