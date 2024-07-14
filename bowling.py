def bowling_score(score_str):
    score = 0
    frame_count = 1
    for char in score_str:
        if char.isdigit():
            if len(char) == 1:  # single strike or spare
                score += 10 + (10 - int(char)) * frame_count
                frame_count += 1
            else:  # two consecutive numbers
                next_frame = int(char[0]) + int(char[1])
                if next_frame == 10:  # spare
                    score += 10 + 10
                elif next_frame < 12:  # strike and single
                    score += 10 + 10 - int(char)
                frame_count += 1
        elif char in ["/X"]:
            if char == "X":
                score += 10
            else:
                score += 10 - int(score_str[score_str.index(char) - 1])
    return score