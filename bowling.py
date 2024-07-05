```python
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 30
            frame_index += 1
        elif frames[frame_index] == '/':
            first_roll = int(frames[frame_index-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame_index += 2
        else:
            first_roll = int(frames[frame_index])
            if i < 10 and frames[frame_index+1] == 'X':
                score += 10 + 30
                frame_index += 2
            elif i < 10 and frames[frame_index+1] == '/':
                second_roll = 10 - int(frames[frame_index+1].split('/')[0])
                score += first_roll + second_roll
                frame_index += 3
            else:
                score += 10 + int(frames[frame_index+1])
                frame_index += 2
    return score