```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif frames[i].isdigit():
            strike = False
            frame_score = int(frames[i])
            if i < 8 and frames[i+1].isdigit() and int(frames[i+1]) + int(frames[i]) <= 10:
                frame_score += int(frames[i+1])
                i += 1
            score += frame_score
        else:
            strike = True
            for j in range(2):
                if frames[i+j].isdigit():
                    frame_score = int(frames[i+j])
                    break
            score += frame_score
            if strike:
                if i < 8 and frames[i+1].isdigit() and int(frames[i+1]) + int(frames[i]) <= 10:
                    for j in range(2):
                        if frames[i+1+j].isdigit():
                            score += int(frames[i+1+j])
                            break
    return score