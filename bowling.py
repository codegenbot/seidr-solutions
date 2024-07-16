def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if "-" in frames[i * 2 : i * 2 + 2]:
                frame_score = 10 + int(frames[i * 2 + 1])
                spare = True
            else:
                frame_score = 10
                strike = True
        elif frames[i * 2] == "X":
            strike = True
            frame_score = 10
        else:
            if frames[i * 2 : i * 2 + 2].count("X") > 1:
                spare = True
                frame_score = 10 - int(frames[i * 2])
            else:
                frame_score = int(frames[i * 2]) + int(frames[i * 2 + 1])
        score += frame_score
    return score