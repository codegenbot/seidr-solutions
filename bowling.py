```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 10 + (10 - i)
            frame_index += 1
        elif frames[frame_index: frame_index+2].isdigit():
            strike = int(frames[frame_index: frame_index+2])
            score += strike
            if i < 10:
                frame_index += 2
            else:
                break
        else:
            spare = int(frames[frame_index]) + int(frames[frame_index+1])
            score += spare
            frame_index += 2
    return score