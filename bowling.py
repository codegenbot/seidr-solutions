def bowling_score(frames):
    score = 0
    frame_num = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            frame_num += 1
        elif char == '/':
            score += 10
            frame_num += 1
        elif char == 'X':
            score += 10
            frame_num += 1
        elif char == '-':
            continue
    return score