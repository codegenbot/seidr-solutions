def bowling_game(frames):
    score = 0
    frame = 1
    prev_frame_score = 0

    for roll in frames:
        if roll == "X":
            score += 10 + prev_frame_score
            prev_frame_score = 10
            frame += 1
        elif roll.isdigit():
            first_roll = int(roll)
            if frame < 10:
                if first_roll == 10:
                    score += 10 + prev_frame_score
                    prev_frame_score = 0
                    frame += 1
                else:
                    score += first_roll
                    prev_frame_score = first_roll
            else:
                if first_roll == 10:
                    score += 10
                else:
                    score += first_roll
        elif roll == "/":
            continue
        else:
            second_roll = int(roll[:-1])
            rest_pins = 10 - int(roll[-1])
            if frame < 9:
                if second_roll + rest_pins == 10:
                    score += second_roll + prev_frame_score
                    prev_frame_score = 0
                    frame += 1
                else:
                    score += second_roll + prev_frame_score
                    prev_frame_score = rest_pins
            else:
                score += second_roll

    return score