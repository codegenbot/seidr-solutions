```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 10 + (10 if i < 10 else 0)
            frame_index += 1
        elif frames[frame_index:frame_index+2].startswith('///'):
            score += 30
            frame_index += 2
        elif frames[frame_index] == '/':
            score += 10 - int(frames[frame_index + 1])
            frame_index += 2
        else:
            strike = False
            for j in range(2):
                if frames[frame_index].isdigit():
                    score += int(frames[frame_index])
                    if j == 0 and i < 10:
                        strike = True
                    frame_index += 1
                elif frames[frame_index] == '/':
                    score += 10 - int(frames[frame_index + 1])
                    frame_index += 2
            if strike:
                score += 10
    return score