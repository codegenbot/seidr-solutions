def bowling_score(frames):
    score = 0
    prev_frame_value = 0
    for i in range(10):
        frame = frames[i*2:i*2+2]
        if frame == "X":
            score += 10
            prev_frame_value = 10
        elif frame[0] == "/":
            first_roll, second_roll = map(int, frame[1:])
            score += first_roll + second_roll
            prev_frame_value = first_roll + second_roll
        else:
            first_roll, second_roll = map(int, frame)
            if first_roll + second_roll == 10:
                prev_frame_value = 10
            else:
                score += first_roll + second_roll
                prev_frame_value = first_roll + second_roll
        if i < 9 and prev_frame_value > 0:
            next_frame = frames[(i+1)*2:(i+2)*2]
            if next_frame == "X":
                score += 10
            elif next_frame[0] == "/":
                first_roll, _ = map(int, next_frame[1:])
                score += first_roll
    return score