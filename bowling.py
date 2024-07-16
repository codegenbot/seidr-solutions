```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 10 + (10 - i) if i < 10 else 10
            frame_index += 1
        elif frames[frame_index: frame_index+2].isdigit():
            strike = int(frames[frame_index: frame_index+2])
            score += strike
            if i < 10:
                frame_index += 2
            else:
                break
        else:
            spare = int(frames[frame_index])
            score += spare + (10 - i)
            frame_index += 1
    return score