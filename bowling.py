```python
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
                    if frame == 10 or (int(next_frame[0]) + int(next_frame[1])) < 11:
                        score += (frame + frames_list[i+1])
                    else:
                        score += frame
            else:
                if i == 9:
                    if len(str(frames_list[8])) == 2 and str(frames_list[8])[0] != '0':
                        score += (frames_list[8] * 3) + frames_list[9]
                    elif frames_list[9] == 10 or (int(str(frames_list[8])[0]) + int(str(frames_list[8])[1])) < 11:
                        if len(str(frames_list[8])) == 2 and str(frames_list[8])[0] != '0':
                            score += (frames_list[7] * 3) + frames_list[8] + frames_list[9]
                        else:
                            score += (frames_list[8] * 2) + frames_list[9]
                    else:
                        if len(str(frames_list[8])) == 1:
                            score += (frames_list[7] * 3)
                        else:
                            score += (frames_list[8] * 2)
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