```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            if i < 10:
                score += 10 + int(frames[frame_index+1:frame_index+3])
            else:
                score += 10 + int(frames[frame_index+1:])
            frame_index += 1
        elif len(frames[frame_index: frame_index+2]) == 2 and frames[frame_index: frame_index+2].isdigit():
            score += int(frames[frame_index: frame_index+2])
            if i < 10:
                frame_index += 2
            else:
                break
        else:
            score += int(frames[frame_index])
            if i < 9:
                frame_index += 1
            else:
                frame_index += 1
    return score