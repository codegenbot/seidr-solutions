def bowling_score(bowls):
    score = 0
    frames = bowls.replace("-", "0").replace("X", "10").split("/")
    
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < 9:
                if frames[i + 1][0] == "X":
                    score += 10
                else:
                    score += int(frames[i + 1][0])
                if len(frames[i + 1]) > 1 and frames[i + 1][1] == "X":
                    score += 10
                elif len(frames[i + 1]) > 1 and frames[i + 1][1] != "0":
                    score += int(frames[i + 1][1])
        else:
            frame_score = sum([int(b) for b in frames[i]])
            if frames[i] == "0":
                pass
            elif len(frames[i]) == 2 and '/' in frames[i]:
                score += 10
            else:
                score += frame_score

    return score