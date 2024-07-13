def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if frames[index] == 'X':
            score += 30
            index += 1
        elif frames[index] == '/':
            score += 10 + int(frames[index - 1])
            index += 2
        else:
            frame_score = 0
            if frames[index:index+2].startswith('X'):
                frame_score += 30
                index += 1
            elif frames[index] != '-':
                frame_score += int(frames[index])
                if len(frames) - index > 1 and frames[index+1] != '-':
                    frame_score += int(frames[index+1])
            score += frame_score
    return score