def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            split_frames = frames[i * 2 : i * 2 + 2].split("/")
            strike = False
            spare = False
            if len(split_frames) == 1:
                strike = True
            elif int(split_frames[0]) + int(split_frames[1]) == 10:
                spare = True
            else:
                score += sum(map(int, split_frames))
        else:
            score += int(frames[i * 2])
        if i < 9 and (strike or spare):
            if strike:
                score += 10 + int(frames[(i + 1) * 2]) + int(frames[(i + 2) * 2])
            elif spare:
                score += 10 + int(frames[(i + 1) * 2])
    return score