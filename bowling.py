```
def bowling_score(frames):
    score = 0
    roll = 0
    frames_list = [int(x) for x in frames.replace('/', '').split()]

    for i, frame in enumerate(frames_list[:10]):
        if frame == 10:
            score += 10 * 2
            roll += 3
            if i < 8:
                next_two_frames = sum(frames_list[i + 1:i + 3])
                score += next_two_frames
        else:
            first_roll = frame
            second_roll = frames_list[roll + 1] if roll + 1 < len(frames_list) else 0
            if first_roll + second_roll == 10:
                score += 10
                roll += 2
            elif first_roll == 10:
                score += first_roll * 2
                roll += 2
            else:
                score += first_roll + second_roll
                roll += 2

    return score