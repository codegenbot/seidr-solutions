def bowling_score(bowls):
    score = 0
    frame = 1
    frame_index = 0

    for bowl in bowls:
        if bowl == "X":
            score += 10
            if frame < 10:
                if bowls[frame_index + 1] == "X":
                    score += 10
                    if bowls[frame_index + 2] == "X":
                        score += 10
                    elif bowls[frame_index + 2] != "-":
                        score += int(bowls[frame_index + 2])
                elif bowls[frame_index + 2] == "/":
                    score += 10
                elif bowls[frame_index + 2] != "-":
                    score += int(bowls[frame_index + 2])

            frame += 1
        elif bowl == "/":
            score += 10 - int(bowls[frame_index - 1])
            frame += 1
        elif bowl != "-":
            score += int(bowl)

        frame_index += 1

    return score