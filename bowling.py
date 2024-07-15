```
def bowling_score(frames):
    frames_list = list(map(int, ''.join(filter(str.isdigit, frames.replace('/', '-'))).split('-')[:10]))
    
    score = 0
    
    for i, frame in enumerate(frames_list):
        if len(str(frame)) == 1:
            if i < 8 and (frame + frames_list[i+1] + frames_list[i+2]) == 10:
                score += 30
            elif i < 9:
                score += 10
            else:
                score += frame * 3
        elif frame == 10:
            score += 20
            roll = 0
        else:
            if i > 0 and (frame + frames_list[i-1]) == 10:
                score += 20
            else:
                first_roll = int(str(frame)[0])
                second_roll = int(str(frame)[1])
                score += first_roll + second_roll * 2 - 10
    
    return score