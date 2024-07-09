def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
            frame_count += 1
        elif frames[i] == '/':
            first_roll = int(frames[i-1])
            second_roll = 10 - int(frames[i+1])
            score += first_roll + second_roll
            frame_count += 1
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            if first_roll + second_roll >= 10:
                score += first_roll + second_roll
                frame_count += 1
            elif first_roll == 10:
                score += first_roll
                frame_count += 1
                if second_roll != 0:
                    score += second_roll
                else:
                    for j in range(i+2, len(frames), 2):
                        if frames[j] == 'X' or (frames[j] != '/' and int(frames[j]) + int(frames[j+1]) >= 10):
                            frame_count += 1
                            break
            else:
                score += first_roll
                frame_count += 1
    if frame_count < 10:
        remaining_frames = len(frames) - 2*frame_count
        for i in range(0, remaining_frames, 2):
            if frames[i] == 'X':
                score += 30
            elif frames[i] == '/':
                first_roll = int(frames[i-1])
                second_roll = 10 - int(frames[i+1])
                score += first_roll + second_roll
            else:
                first_roll = int(frames[i])
                second_roll = int(frames[i+1])
                if first_roll + second_roll >= 10:
                    score += first_roll + second_roll
                else:
                    score += first_roll
    return score