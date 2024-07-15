```
def bowling_score(frames):
    score = 0
    roll = 0
    
    frames_list = [int(x) for x in frames.replace('/', '-').split('-')]
    
    for i, frame in enumerate(frames_list[:10]):
        if len(str(frame)) == 1:
            if i < 8:
                next_frame = sum(frames_list[i + 1:i + 3])
                if next_frame == 10:
                    score += (frame * 2) + frames_list[i + 1] + frames_list[i + 2]
                    roll = 0
                else:
                    score += frame + sum(frames_list[i + 1:i + 2])
            else:
                if i == 9:
                    score += (frames_list[8] * 3) + frames_list[9]
        else:
            if frame == 10:
                score += frame * 2
                roll = 0
            elif int(str(frame)[0]) + int(str(frame)[1]) < 11:
                score += frame
                roll = 0
            else:
                first_roll = int(str(frame)[0])
                second_roll = int(str(frame)[1])
                if i == 8 and len(str(frames_list[9])) == 1:
                    next_frame = frames_list[9] + frames_list[-1]
                    score += (first_roll + second_roll * 2)
                elif i < 8 and len(str(frames_list[i+1])) > 1:
                    if roll == 0:
                        score += frame
                    else:
                        score += first_roll + second_roll
        if roll > 0:
            roll -= 1
    return score