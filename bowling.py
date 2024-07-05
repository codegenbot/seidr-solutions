```
def bowling_score(frames):
    score = 0
    frame_num = 1
    previous_frame_score = 0
    for char in frames:
        if char.isdigit():
            current_frame_score = int(char)
            if previous_frame_score == 10 and current_frame_score != 0:
                score += 10 + current_frame_score
            else:
                score += current_frame_score
            frame_num += 1
        elif char == '/':
            score += 10 - previous_frame_score
            frame_num += 1
        elif char == 'X':
            score += 10 + 10 - previous_frame_score
            frame_num += 1
        elif char == '-':
            score += 10 - previous_frame_score
            frame_num += 1
    return score