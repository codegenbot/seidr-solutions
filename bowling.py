```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 10
            if i < 10:
                strike = int(frames[frame_index+1:frame_index+3].lstrip(' /'))
                score += strike
            frame_index += 1
        elif frames[frame_index: frame_index+2].isdigit():
            roll = int(frames[frame_index: frame_index+2])
            score += roll
            if i < 10:
                if roll == 10:
                    frame_index += 1
                else:
                    frame_index += 2
        else:
            spare = int(frames[frame_index].lstrip('/'))
            score += spare + 10 - i
            frame_index += 1
    return score