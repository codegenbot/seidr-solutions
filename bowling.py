def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split("/"):
        if len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                score += 10
                if frame_num < 10:
                    score += next_frames(frames, frame_num)
            else:
                score += first_roll + second_roll
        elif len(frame) > 2:
            first_roll = int(frame[0])
            for roll in range(1, len(frame)):
                second_roll = int(frame[roll])
                if first_roll + second_roll == 10:
                    score += first_roll + second_roll
                    break
                else:
                    score += first_roll + second_roll
        frame_num += 1
    return score


def next_frames(frames, num):
    for i in range(num * 2 - 1, len(frames)):
        if frames[i] != "X":
            return int(frames[i])
    return 0