def bowling_score(frames):
    score = 0
    frame_count = 1
    for frame in frames:
        if frame == "X":
            score += 30
            frame_count -= 1
        elif frame == "/":
            score += 10
            frame_count -= 1
        else:
            strike = False
            if len(frame) > 1 and frame[0] == "X" and frame[1].isdigit():
                score += int(frame[1]) + 10
                strike = True
            elif frame.isdigit() and int(frame) <= 10:
                score += int(frame)
            else:
                first_roll, second_roll = map(int, frame.split("/"))
                if first_roll == 10:
                    score += 10 + second_roll
                else:
                    score += first_roll + second_roll
            if strike:
                frame_count -= 1
    return score