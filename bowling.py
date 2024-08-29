```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
        else:
            frame_score = 0
            for j in range(int(frames[i])):
                if frames[i+j+1] == 'X':
                    frame_score += 10 + (10 - j)
                    break
                elif frames[i+j+1] == '/':
                    frame_score += 10 + int(frames[i+j+2]) - j
                    break
                else:
                    frame_score += int(frames[i+j+1])
            score += frame_score
    return score