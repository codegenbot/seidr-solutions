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
            while not strike and frame_index < len(frames):
                if frames[frame_index] == "X":
                    score += 30
                    strike = True
                    frame_index += 1
                elif frames[frame_index] == "/":
                    score += 10 + int(frames[frame_index - 1])
                    frame_index += 2
                    break
                else:
                    first_roll, second_roll = map(
                        int, frames[frame_index : frame_index + 2].split("/")
                    )
                    score += first_roll + second_roll
                    frame_index += 2
    return score