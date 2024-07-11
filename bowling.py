def bowling_score(frames):
    score = 0
    frame_index = 1
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
            if frame_index < 9: 
                score += int(frames.split("/")[frame_index+1].split("-")[0]) + int(frames.split("/")[frame_index+1].split("-")[1][:1])
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10: 
                score += first_roll + int(frames.split("/")[frame_index+1].split("-")[0]) if frame_index < 9 else 0
            else:
                score += first_roll + second_roll
        frame_index += 1
    return score