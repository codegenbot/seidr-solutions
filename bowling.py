```
def bowling_score(frames):
    score = 0
    roll = 0
    frames_list = [int(x) for x in frames.split("/")]

    for i, frame in enumerate(frames_list[:10]):
        if len(str(frame)) == 1:
            if frame == 10:
                if i < 8:
                    next_frame = frames_list[i + 1] + frames_list[i + 2]
                    score += (frame + next_frame) * 2
                elif i == 9:
                    score += (frames_list[8] + frames_list[9]) * 2
                roll += 3
            else:
                score += frame * 10
                roll += 2
        elif len(str(frame)) == 2:
            first_roll = int(str(frame)[0])
            second_roll = int(str(frame)[1])
            if first_roll == 10:
                next_frame = frames_list[i + 1] + frames_list[i + 2]
                if i < 8:
                    score += (frame + next_frame) * 2
                elif i == 9:
                    score += (frames_list[8] + frames_list[9]) * 2
                roll += 3
            else:
                if second_roll == 0:
                    if i < 8:
                        score += frame + frames_list[i + 1]
                    else:
                        score += frame + frames_list[8]
                    roll += 2
                else:
                    score += first_roll + second_roll
                    roll += 2

    return score