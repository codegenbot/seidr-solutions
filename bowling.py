def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 1]:
            frame_score = list(map(int, re.split("/", frames[i * 2 : i * 2 + 2])))
            if len(frame_score) == 3:
                score += 10 + sum(frame_score[1:])
            elif frame_score[0] == 10:
                score += 10 + sum(frame_score[1:])
            else:
                score += frame_score[0] + max(frame_score[1], 10 - frame_score[0])
        else:
            score += int(frames[i * 2 : i * 2 + 1])
    return score