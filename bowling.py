def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")

    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < 9:
                if bowls[i + 1] == "X":
                    score += 10
                else:
                    score += 10 + int(bowls[i + 1])
                if i == 8 and len(bowls) == 20:
                    if bowls[i + 2] == "X":
                        score += 10
                    elif bowls[i + 2] == "/":
                        score += 10
                    elif bowls[i + 2] != "-":
                        score += int(bowls[i + 2])
            elif i == 9:
                if len(bowls) == 21:
                    if bowls[i + 1] == "X":
                        score += 10
                    elif bowls[i + 1] == "/":
                        score += 10
                    elif bowls[i + 1] != "-":
                        score += int(bowls[i + 1])
                    if bowls[i + 2] == "X":
                        score += 10
                    elif bowls[i + 2] != "-":
                        score += int(bowls[i + 2])
        elif frames[i] == "-":
            pass
        else:
            if i < 9:
                score += int(frames[i])
            elif i == 9:
                for bowl in frames[i]:
                    if bowl != "-":
                        score += int(bowl)

    return score