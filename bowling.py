def get_score(bowls):
    score = 0
    for i in range(len(bowls)):
        if bowls[i] == "X":
            score += 10
        elif bowls[i] == "/" and bowls[i-1] == "X":
            score += int(bowls[i])
        else:
            score += int(bowls[i])
    return score
```