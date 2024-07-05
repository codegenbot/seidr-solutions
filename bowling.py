def bowling_score(frames):
    score = 0
    frame_num = 1
    for char in frames:
        if char == 'X':
            score += 10
            frame_num += 1
        elif char.isdigit():
            if len(frames) > 1 and frames[frames.index(char)+1] == '/':
                score += 10
            else:
                score += int(char)
            frame_num += 1
        elif char == '-':
            if len(frames) > 2 and frames[frames.index(char)+1].isdigit():
                score += int(frames[frames.index(char)+1])
            frame_num += 1
    return score