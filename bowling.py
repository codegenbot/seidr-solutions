```python
user_input = input()
frames = [frame.replace("-", "") for frame in user_input.split("\n")]

def bowling_score(frames):
    total_score = 0
    current_frame_score = 0
    roll_count = 1

    for i, frame in enumerate(frames):
        if len(frame) == 2:
            if int(frame[1]) + int(frame[0]) > 10:
                current_frame_score += 10 + (int(frame[1]) - 2)
            else:
                current_frame_score += int(frame[0]) + int(frame[1])
        elif len(frame) > 1:
            current_frame_score += sum(map(int, frame))
        else:
            if i < 9 and frames[i+1].endswith("0"):
                current_frame_score += 10
            else:
                current_frame_score += int(frame[0])
        total_score += current_frame_score
        roll_count = 1 if roll_count == 2 else 0

    return total_score