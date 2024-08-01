def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            score += sum(map(int, frame))
            roll += 1
        else:
            strike = True
            while strike:
                if len(frame) > 1 and frame[0] != "X":
                    score += int(frame[0]) + int(frame[1])
                    roll += 2
                    break
                elif len(frame) == 1 and frame[0] == "X":
                    score += 10
                    roll += 1
                    break
                else:
                    score += 10
                    roll += 1
                    if len(frame) > 1 and frame[1] != "X":
                        score += int(frame[1])
                        roll += 1
                    break
    return score