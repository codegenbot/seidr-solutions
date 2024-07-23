def bowling_score(frames):
    score = 0
    for char in frames:
        if char.isdigit():
            if char == '10':
                score += 10
            elif char == '7' or char == '8' or char == '9':
                frame_type = int(char)
                next_frame = frames[frames.index(char) + 1]
                if next_frame.isdigit() and int(next_frame) >= frame_type:
                    score += (frame_type * 2)
                else:
                    score += frame_type
            else:
                score += int(char)
        elif char == '/':
            score += 10
    return score