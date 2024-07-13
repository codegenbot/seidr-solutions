def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10 + 10 * (frame_count > 9)
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            score += first_roll + (10 - first_roll) if second_roll == 0 else second_roll
            if frame_count < 9:
                score += 10
        else:
            first_roll, second_roll, third_roll = map(int, frame)
            score += first_roll + second_roll
            if frame_count < 8:
                score += third_roll
        frame_count += 1
    return score