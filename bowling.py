def get_score(bowls):
    score = 0
    for i in range(len(bowls)):
        if bowls[i] == "X":
            score += 10
        elif bowls[i] == "/" or bowls[i] == "-":
            continue
        else:
            score += int(bowls[i])
    return score
