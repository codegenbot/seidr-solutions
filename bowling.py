def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame < 10:
                score += 10
            elif frame == 10:
                score += 10
            frame += 1
        elif frames[i] != '/':
            score += int(frames[i])
            frame += 1
        else:
            frame_score = int(frames[i:i+2].replace('/', ''))
            if frame_score < 10:
                score += frame_score
            elif frame_score == 10:
                score += 10
                frame += 1
            else:
                score += 10
                frame += 1
    return score