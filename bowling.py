```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 30
            frame_index += 1
        elif frames[frame_index].isdigit():
            strike = False
            if len(frames) - frame_index >= 2 and frames[frame_index:frame_index+2][0] == '/':
                strike = True
            if not strike:
                score += int(frames[frame_index])
                frame_index += 1
            else:
                score += int(frames[frame_index].lstrip('/'))
                frame_index += 2
        elif '/' in frames[frame_index]:
            score += int(frames[frame_index].split('/')[0]) + int(frames[frame_index].split('/')[1])
            frame_index += 1
    return score