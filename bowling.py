user_input = input()
frames = [frame.replace("-", "") for frame in user_input.split("\n")]

def bowling_score(frames):
    total_score = 0
    current_frame_score = 0
    roll_count = 1

    for frame in frames:
        if len(frame) == 2:
            current_frame_score += 10 + (int(frame[1]) - '0')
        elif len(frame) > 1:
            current_frame_score += int(frame[0]) + int(frame[1])
        else:
            current_frame_score += 10
        total_score += current_frame_score
        roll_count = 1 if roll_count == 2 else 0

    return total_score