```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 10 + (10 if i < 10 else 0)
            frame_index += 1
        elif frames[frame_index: frame_index+2].isdigit():
            strike_score = int(frames[frame_index: frame_index+2])
            score += strike_score
            frame_index += 2
        else:
            score += int(frames[frame_index])
            frame_index += 1
    return score