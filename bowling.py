def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")

    for i in range(len(frames)):
        for bowl in frames[i]:
            if bowl == "X":
                score += 10
            elif bowl == "-":
                pass
            else:
                score += int(bowl)

        if i == 9:
            if len(bowls) == 20:
                if bowls[-3] == "X":
                    score += 10
                else:
                    for bowl in bowls[-2:]:
                        if bowl == "X":
                            score += 10
                        elif bowl != "-":
                            score += int(bowl)

            elif len(bowls) == 21:
                if bowls[-2] == "/":
                    score += 10
                else:
                    for bowl in bowls[-2:]:
                        if bowl == "X":
                            score += 10
                        elif bowl != "-":
                            score += int(bowl)

    return score