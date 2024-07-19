def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            score_frame = int(frames[i])
            i += 1
            if i < len(frames) and frames[i].isdigit():
                score_frame += int(frames[i])
                i += 1
            if frame < 10:
                score += min(score_frame, 10)
            else:
                score += score_frame
        elif frames[i] == '/':
            first_roll = int(frames[:i].rfind(str(int(frames[i-1]) + 1)) or len(frames) - i)
            score += (10 - first_roll if first_roll < 10 else 0) + first_roll
            frame += 1
        i += 1
    return score