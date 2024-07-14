def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            split_frame = frames[i].split("/")
            strike = False
            spare = False
            if len(split_frame) == 2:
                spare = True
            elif len(split_frame) > 2:
                strike = True
            else:
                score += int(split_frame[0])
        else:
            score += int(frames[i])
        if strike:
            score += 10 + sum(map(int, frames[i + 1 : i + 3]))
        elif spare:
            score += 10 + int(frames[i + 1])
    return score