```
def bowling_score(frames):
    frames_list = [int(x) for x in frames.replace('/', '-').split('-')]
    
    score = 0
    roll = 0
    
    for i, frame in enumerate(frames_list[:10]):
        if len(str(frame)) == 1:
            if i < 8:
                next_frame = frames_list[i + 1] + frames_list[i + 2]
                if int(next_frame) == 10:
                    score += (frame * 3)
                else:
                    score += frame
                    roll = 2
                if i < 7 and len(str(frames_list[i+2])) == 1:
                    next_next_frame = frames_list[i+3] + frames_list[i+4]
                    if int(next_next_frame) == 10:
                        score += (frames_list[i+1] * 3)
                    else:
                        score += (frame + frames_list[i+1])
                elif i < 8 and len(str(frames_list[i+2])) > 1:
                    score += frame
            else:
                if i == 9:
                    score += (frames_list[8] * 3) + frames_list[9]
        else:
            if frame == 10:
                score += frame * 2
                roll = 3
            elif int(str(frame)[0]) + int(str(frame)[1]) < 11:
                score += frame
                roll = 2
            else:
                first_roll = int(str(frame)[0])
                second_roll = int(str(frame)[1])
                if i == 8 and len(str(frames_list[9])) == 1:
                    next_frame = frames_list[9] + frames_list[10]
                    score += (first_roll + second_roll * 2)
                elif i < 8 and len(str(frames_list[i+1])) > 1:
                    score += frame
        if roll == 3:
            roll = 0
    return score