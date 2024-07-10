def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")
    
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < 9:
                if i + 1 < len(bowls):
                    next_bowl = bowls[i + 1]
                    if next_bowl == "X":
                        score += 10
                        if i + 2 < len(bowls):
                            next_next_bowl = bowls[i + 2]
                            if next_next_bowl == "X":
                                score += 10
                            elif next_next_bowl != "-":
                                score += int(next_next_bowl)
                    elif next_bowl == "-":
                        pass
                    else:
                        score += int(next_bowl)
            elif i == 9:
                if len(bowls) == 21:
                    if bowls[19] == "X" and bowls[20] == "X":
                        score += 20
                    elif bowls[19] == "X" or bowls[20] == "X":
                        score += 10
                    elif bowls[20] != "-":
                        score += int(bowls[20])
                    
        else:
            for bowl in frames[i]:
                if bowl == "-":
                    pass
                else:
                    score += int(bowl)
                
    return score