def get_score(bowls):
    score = 0
    for i, bowl in enumerate(bowls):
        if bowl == 'X':
            score += 10 + (2 if i < len(bowls) - 1 and bowls[i+1] == '/' else 0)
        elif bowl == '/':
            score += 10 + (1 if i > 0 and bowls[i-1] == 'X' else 0)
        else:
            score += int(bowl)
    return score
