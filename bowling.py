def bowling_score(frames):
    score = 0
    frame_count = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
            frame_count -= 1
        elif frames[i] == '/':
            first_roll = int(frames[i-1])
            second_roll = 10 - int(frames[i+1])
            score += first_roll + second_roll
            frame_count -= 1
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            if first_roll + second_roll >= 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
            if first_roll + second_roll == 10:
                frame_count -= 1
    for i in range(2, len(frames), 2):
        if frames[i] != 'X' and frames[i] != '/':
            first_roll = int(frames[i-1])
            second_roll = int(frames[i])
            score += first_roll + second_roll
    return score