def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 10
            if i < 10:
                frame_index += 1
                if frames[frame_index] == 'X' or len(frames[frame_index:].lstrip('0')) > 1:
                    score += 10
                else:
                    score += int(frames[frame_index])
        elif frames[frame_index: frame_index+2].isdigit():
            strike = int(frames[frame_index: frame_index+2])
            score += strike
            if i < 10:
                frame_index += 2
            else:
                break
        else:
            spare = int(frames[frame_index])
            score += spare + (i == 10 and 1 or 2)
            frame_index += 1
    return score