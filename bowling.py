```python
user_input = input()
frames = [frame.replace("-", "") for frame in user_input.split("\n")]


def bowling_score(frames):
    total_score = 0
    current_frame_score = 0
    roll_count = 1

    for frame in frames:
        if len(frame) == 2:
            if int(frame[1]) > 0:
                current_frame_score += 10 + (int(frame[1]) - 1)
            else:
                current_frame_score += 10
        elif len(frame) > 1:
            current_frame_score += int(frame[0]) + int(frame[1])
        else:
            if roll_count == 2:
                current_frame_score += 10
            else:
                current_frame_score += 10
        total_score += current_frame_score
        if len(frame) > 1:
            roll_count = 1
        elif frame != "10":
            roll_count = 2

    return total_score