def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 30
            frame_count += 1
        elif frames[i] == '/':
            first_roll = int(frames[i-1])
            second_roll = 10 - int(frames[i+1])
            score += first_roll + second_roll
            frame_count += 2
        else:
            if i < len(frames) - 1 and frames[i] + frames[i+1].isdigit():
                first_roll = int(frames[i])
                second_roll = int(frames[i+1])
                if first_roll + second_roll >= 10:
                    score += first_roll + second_roll
                    frame_count += 2
                else:
                    score += first_roll + second_roll
                    frame_count += 1
            else:
                first_roll = int(frames[i])
                score += first_roll
                frame_count += 1
    return score