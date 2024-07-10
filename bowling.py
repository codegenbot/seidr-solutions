def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < 9:
                if bowls[i + 2] == "X":
                    score += 10
                else:
                    score += int(bowls[i + 2])
                if bowls[i + 3] == "/":
                    score += 10
                elif bowls[i + 3] != "-":
                    score += int(bowls[i + 3])
            if i == 9:
                if len(bowls) == 20:
                    score += 10
                else:
                    if bowls[11] == "X":
                        score += 10
                    elif bowls[11] == "/":
                        score += 10
                    elif bowls[11] != "-":
                        score += int(bowls[11])
                    if bowls[12] == "X" or bowls[12] == "/":
                        score += 10
                    elif bowls[12] != "-":
                        score += int(bowls[12])
        else:
            for bowl in frames[i]:
                if bowl == "X":
                    score += 10
                elif bowl == "-":
                    pass
                else:
                    score += int(bowl)
    return score