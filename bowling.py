def bowling_score(frames):
    score = 0
    frames_list = [int(x) for x in frames.split("/")]

    for i, frame in enumerate(frames_list[:10]):
        if len(str(frame)) == 1: 
            score += 10 + (next_frames(i) or 0) * 2
        elif len(str(frame)) == 2: 
            first_roll = int(str(frame)[0])
            second_roll = int(str(frame)[1])
            if first_roll == 10: 
                score += 10 + next_frames(i)
            else:
                score += first_roll + second_roll

    return score