def bowling_score(frames):
    score = 0
    frame_count = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            first_roll = int(frames[i])
            second_roll = int(frames[i + 1]) if frames[i + 1].isdigit() else 10
            if first_roll == 10:
                score += 10
                frame_count -= 1
            elif first_roll + second_roll == 10 and frames[i + 2].isdigit():
                score += 10
                frame_count -= 1
            elif first_roll + second_roll < 11:
                score += first_roll + second_roll
                frame_count -= 1
        else:
            score += 10
            frame_count -= 1
    return score