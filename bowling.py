```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 10
            if i < 10:
                if frames[frame_index+1:frame_index+3].isdigit():
                    score += int(frames[frame_index+1:frame_index+3])
                else:
                    score += 10
            frame_index += 1
        elif frames[frame_index: frame_index+2].isdigit():
            strike = int(frames[frame_index: frame_index+2])
            if i < 10 and str(strike) != '10':
                score += strike
                score += 10 - i
            else:
                score += strike
            frame_index += 2
        else:
            spare = int(frames[frame_index])
            score += spare + (10 - i)
            frame_index += 1
    return score