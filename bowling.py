```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 10
            if i < 10:
                strike = int(frames[frame_index+1: frame_index+3])
                score += strike
            frame_index += 1
        elif len(frames) > frame_index + 1 and frames[frame_index:frame_index+2].isdigit():
            spare = int(frames[frame_index:frame_index+2])
            score += spare
            if i < 10:
                frame_index += 2
            else:
                break
        else:
            score += 10 - i
            frame_index += 1
    return score