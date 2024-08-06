```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 30
            frame_index += 1
        elif frames[frame_index] == '/':
            strike = True
            while strike:
                if frames[frame_index + 1] == 'X' or frames[frame_index + 1] == '/':
                    score += 10 + int(frames[frame_index + 2])
                    frame_index += 3
                    strike = False
                else:
                    score += 10 + int(frames[frame_index + 1])
                    frame_index += 2
                    strike = False
        else:
            score += int(frames[frame_index]) + int(frames[frame_index + 1])
            frame_index += 2
    return score