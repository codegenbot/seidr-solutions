def get_score(bowl_string):
    score = 0
    for bowl in bowl_string:
        if bowl == 'X':
            score += 10
        elif bowl == '/':
            score += 5
        else:
            score += int(bowl)
    return score
