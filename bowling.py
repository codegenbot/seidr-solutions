```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 10 + (10 - int(frames[frame_index+1].split('/')[0])) if i < 10 and frames[frame_index+1] != 'X' else 10
            frame_index += 1 if i < 10 and frames[frame_index+1] != 'X' else 2
        elif frames[frame_index] == '/':
            score += 10 - int(frames[frame_index].split('/')[0])
            frame_index += 2
        else:
            first_roll = int(frames[frame_index])
            if i < 10 and frames[frame_index+1] == 'X':
                score += 10 + 10
                frame_index += 2
            elif i < 10 and frames[frame_index+1] == '/':
                score += first_roll + (10 - int(frames[frame_index+1].split('/')[0]))
                frame_index += 3
            else:
                score += first_roll + int(frames[frame_index+1])
                frame_index += 2
    return score