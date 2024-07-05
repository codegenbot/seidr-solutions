```
def bowling_score(frames):
    score = 0
    frame_num = 1
    prev_frame_points = 0
    for char in frames:
        if char.isdigit():
            current_frame_points = int(char)
            if prev_frame_points == 10:  # strike
                score += 10 + current_frame_points
            elif prev_frame_points + current_frame_points >= 10:  # spare
                score += 10 + (10 - prev_frame_points - current_frame_points)
            else:
                score += prev_frame_points + current_frame_points
            frame_num += 1
        elif char == '/':
            score += 10
            frame_num += 1
        elif char == 'X':
            score += 10 + int(frames[frames.index(char) + 1])
            frame_num += 1
    return score