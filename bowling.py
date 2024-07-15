def bowling_score(frames):
    score = 0
    roll = 0
    frames_list = [int(x) for x in frames.split("/")]

    for i, frame in enumerate(frames_list[:10]):
        if len(str(frame)) == 1:
            if frame == 10:
                if i < 8:
                    score += (frame + next_frames(i)) * 2 + 10
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
                if i < 8:
                    score += (frame + next_frames(i)) * 2 + 10
                elif i == 9:
                    score += (frames_list[8] + frames_list[9]) * 2
                roll += 3
            else:
                if second_roll == 0:
                    if i < 8:
                        score += frame + next_frames(i)
                    else:
                        if i == 9:
                            score += frame + frames_list[9]
                        else:
                            score += frame
                    roll += 2
                else:
                    score += first_roll + second_roll
                    roll += 2

    return score


def next_frames(i):
    if i < 8:
        return [frames_list[i + 1][0]]
    elif i == 9:
        return [10]