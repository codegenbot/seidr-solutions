def get_score(bowls):
    score = 0
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
        elif bowls[i] == '/':
            score += 10 - int(bowls[i-1])
        else:
            score += int(bowls[i])
    return score