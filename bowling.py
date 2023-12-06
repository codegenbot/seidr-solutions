
def get_score(bowls):
    score = 0
    for i, bowl in enumerate(bowls):
        if bowl == 'X':
            score += 10
        elif bowl == '/':
            score += 10
        else:
            score += int(bowl)
        # Check for strike and next two rolls are also strikes
        if bowl == 'X' and len(bowls) > i + 2 and bowls[i + 1] == 'X' and bowls[i + 2] == 'X':
            score += 20
    return score