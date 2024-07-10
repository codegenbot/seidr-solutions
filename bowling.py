def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")
    
    for i in range(len(frames)):
        for bowl in frames[i]:
            if bowl == "X":
                score += 10
                if i < 9:
                    if bowls[i + 1] == "X":
                        score += 10
                    elif bowls[i + 1] == "/":
                        score += 10
                    elif bowls[i + 1] != "-":
                        score += int(bowls[i + 1])
                    if bowls[i + 2] == "X":
                        score += 10
                    elif bowls[i + 2] == "/":
                        score += 10
                    elif bowls[i + 2] != "-":
                        score += int(bowls[i + 2])
            elif bowl == "/":
                score += 10 - int(frames[i-1][-1])
            elif bowl != "-":
                score += int(bowl)
    
    return score