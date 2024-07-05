def bowling_score(frames):
    score = 0
    frame_num = 1
    prev_roll = 0  
    for char in frames:
        if char.isdigit():
            roll = int(char)
            score += roll
            prev_roll = roll
            frame_num += 1
        elif char == 'X':
            score += 10 + prev_roll
            frame_num += 1
        elif char == '/':
            score += 10
            prev_roll = 0
            frame_num += 2  
        elif char == '-':
            continue
    return score