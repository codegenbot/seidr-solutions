def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame) * 10 + 10
            roll += 2
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll == 10: 
                # strike
                score += 10 + 10 + int(frames.split("/")[frames.split("/").index(frame)+1].split(max)[0]) if len(frames.split("/")[frames.split("/").index(frame)+1]) > 1 else 10
                roll += 3
            elif second_roll == 10: 
                # spare
                score += 10 + int(frames.split("/")[frames.split("/").index(frame)+1].split(max)[0]) if len(frames.split("/")[framesplit"/".index(frame)+1]) > 1 else 10
                roll += 2
            else:
                score += first_roll + second_roll
                roll += 2
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if first_roll == 10: 
                # strike
                score += 10 + 10 + 10
                roll += 3
            elif second_roll == 10:
                # spare
                score += 10 + 10
                roll += 2
            else:
                # open frame
                score += first_roll + second_roll + third_roll
                roll += 3
    return score