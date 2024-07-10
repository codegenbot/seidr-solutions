def bowling_score(bowls):
    score = 0
    frames = bowls.replace("-", "0").replace("X", "X/").split("/")
    frames = [frame.replace("X", "X/") for frame in frames]

    for i in range(len(frames)):
        if frames[i] == "X/":
            score += 20
            if i < 9:
                if frames[i + 1] == "X":
                    score += 10
                else:
                    score += int(frames[i + 1][0])
            elif i == 9:
                if len(bowls) > 11:
                    score += 10 * (len(frames) - 1)
        elif "X" in frames[i]:
            score += 10
            if "/" in frames[i]:
                score += int(frames[i - 1][0])
        else:
            for bowl in frames[i]:
                score += int(bowl)

    return score