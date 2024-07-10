def bowling_score(frames):
    score = 0
    frame_index = 0
    while frame_index < len(frames):
        if frames[frame_index] == "X":
            score += 30
            frame_index += 1
        elif frames[frame_index] == "/":
            score += 10 + int(frames[frame_index - 1])
            frame_index += 2
        else:
            strike = False
            current_frame_score = 0
            while frame_index < len(frames) and (
                frames[frame_index] != "/" or not strike
            ):
                if frames[frame_index] == "X":
                    score += 30
                    strike = True
                    frame_index += 1
                elif frames[frame_index] == "/":
                    current_frame_score += 10 + int(frames[frame_index - 1])
                    frame_index += 2
                else:
                    current_frame_score += int(frames[frame_index])
                    frame_index += 1
            if strike:
                score += current_frame_score
            else:
                score += current_frame_score
    return score