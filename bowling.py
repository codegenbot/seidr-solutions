```
def bowling_score(frames):
    score = 0
    roll = 0
    frames_list = [int(x) for x in frames.split("/")]

    for i, frame in enumerate(frames_list[:10]):
        if len(str(frame)) == 1:
            if frame == 10:
                next_frame = frames_list[i+1] if i < 8 else sum(frames_list[9:])
                score += (frame + next_frame) * 2 + 10
                roll += 3
            else:
                score += frame * 2
                roll += 2
        elif len(str(frame)) == 2:
            first_roll = int(str(frame)[0])
            second_roll = int(str(frame)[1])
            if first_roll == 10:
                next_frame = frames_list[i+1] if i < 8 else sum(frames_list[9:])
                score += (frame + next_frame) * 2 + 10
                roll += 3
            elif first_roll + second_roll == 10:
                score += frame + frames_list[i+1]
                roll += 2
            else:
                score += first_roll + second_roll
                roll += 2

    return score