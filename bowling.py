```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(10):
        if frames[frame_index] == 'X':
            score += 30
            frame_index += 1
        elif frames[frame_index].isdigit() and (frames[frame_index + 1] == '/' or frames[frame_index + 1].isdigit()):
            score += int(frames[frame_index]) + int(frames[frame_index + 1].replace('/', ''))
            frame_index += 2
        else:
            if frames[frame_index].isdigit():
                score += int(frames[frame_index])
            frame_index += 1
    return score