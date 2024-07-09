def bowling_score(frames):
    score = 0
    next_frames = frames.split("/")
    frame_index = 1
    for frame in frames.split("/"):
        score += calculate_frame_score(frame, next_frames[0 : frame_index + 2])
        next_frames = next_frames[frame_index + 1 :]
        frame_index += 1
    return score


def calculate_frame_score(frame, subsequent_frames):
    if len(frame) == 1:
        return (
            10
            + (
                calculate_roll(subsequent_frames[0])
                + calculate_roll(subsequent_frames[1])
            )
            if len(subsequent_frames) > 1
            else 10
        )
    elif len(frame) == 2:
        return int(frame[0]) + int(frame[1])
    else:
        return 10 + (
            calculate_roll(subsequent_frames[0])
            if len(subsequent_frames) > 1
            else calculate_roll(frame)
        )


def calculate_roll(roll):
    return int(roll)