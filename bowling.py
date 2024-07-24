```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 10 + (10 - i) * 10
            frame_index += 1
        elif frames[frame_index: frame_index + 2].isdigit():
            strike = False
            if int(frames[frame_index]) + int(frames[frame_index + 1]) >= 10:
                strike = True
            score += int(frames[frame_index]) + int(frames[frame_index + 1])
            frame_index += 2
            if not strike:
                if frames[frame_index].isdigit():
                    score += int(frames[frame_index])
                    frame_index += 1
                else:
                    score += 10
                    frame_index += 1
        else:
            score += 10
            frame_index += 1
    return score