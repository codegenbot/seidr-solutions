def bowling_score(frames):
    score = 0
    frame_index = 0
    while frame_index < len(frames):
        if frames[frame_index] == 'X':
            score += 30
            frame_index += 1
        elif frames[frame_index] == '/':
            score += 10 + int(frames[frame_index+1])
            frame_index += 2
        else:
            first_roll = int(frames[frame_index])
            second_roll = int(frames[frame_index+1])
            if first_roll + second_roll == 10:
                score += 10 + first_roll
                frame_index += 2
            else:
                score += first_roll + second_roll
                frame_index += 2
    return score