```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(10):
        if frames[frame_index] == 'X':
            score += 30
            frame_index += 1
        elif frames[frame_index] == '/':
            first_roll = int(frames[frame_index+1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame_index += 2
        else:
            first_roll = int(frames[frame_index])
            if len(frames) > frame_index + 1 and frames[frame_index+1] == 'X':
                second_roll = 10 - first_roll
            elif frames[frame_index+1] != '/':
                second_roll = int(frames[frame_index+1])
            else:
                second_roll = 10 - first_roll
            if first_roll + second_roll >= 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
            frame_index += 2
    return score