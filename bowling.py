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
            for i in range(2):
                if i < len(frames) - 1 and frames[index:index+3].startswith('X'):
                    frame_score += 30
                    index += 1
                    break
                elif i == 0:
                    frame_score += int(frames[index])
                index += 1
            score += frame_score
    return score