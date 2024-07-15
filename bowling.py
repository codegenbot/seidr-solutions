```
def bowling_score(frames):
    score = 0
    roll = 0
    frames_list = [int(x) for x in frames.replace('/', '').split()]

    for i, frame in enumerate(frames_list[:10]):
        if frame == 10:
            if i < 8:
                next_frame = frames_list[i + 1] + frames_list[i + 2]
                score += (frame * 2) + next_frame
                roll += 3
            elif i == 9:
                score += (frames_list[8] + frames_list[9]) * 2
                roll += 4
        else:
            if len(str(frame)) == 1:
                score += frame * 10
                roll += 2
            elif len(str(frame)) == 2:
                first_roll = int(str(frame)[0])
                second_roll = int(str(frame)[1])
                if first_roll + second_roll < 11:
                    score += frame
                    roll += 2
                else:
                    if i < 9 and i > 1:
                        if frames_list[i - 1] == 10:
                            next_frame = (frames_list[i + 1] + frames_list[i + 2])
                            score += first_roll + second_roll + next_frame
                            roll += 3
                        else:
                            score += frame
                            roll += 2
                    else:
                        if i < 9 and frames_list[i - 1] == 10:
                            next_frame = (frames_list[i + 1] + frames_list[i + 2])
                            score += first_roll + second_roll + next_frame
                            roll += 3
                        else:
                            score += frame
                            roll += 2

    return score