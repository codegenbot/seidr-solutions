def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")

    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < 10:
                score += 10
                if bowls[i + 2] == "X":
                    score += 10
                elif bowls[i + 2] != "-":
                    score += int(bowls[i + 2])
            else:
                if len(bowls) > 10:
                    for j in range(10, len(bowls)):
                        if bowls[j] == "X":
                            score += 10
                        elif bowls[j] == "-":
                            pass
                        else:
                            score += int(bowls[j])
        else:
            for bowl in frames[i]:
                if bowl == "-":
                    pass
                else:
                    score += int(bowl)
    return score