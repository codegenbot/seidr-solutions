def get_bowling_score(bowls):
    score = 0
    frame = 0
    bowl = 0
    prev_bowl = ''
    while frame < 10:
        if bowls[bowl] == 'X':
            score += 10
            if bowl + 2 < len(bowls):
                score += get_bowl_value(bowls[bowl + 1]) + get_bowl_value(bowls[bowl + 2])
            frame += 1
            bowl += 1
        elif bowls[bowl] == '/':
            score += 10 - get_bowl_value(prev_bowl)
            if bowl + 1 < len(bowls):
                score += get_bowl_value(bowls[bowl + 1])
            frame += 1
            bowl += 1
        else:
            score += get_bowl_value(bowls[bowl])
            prev_bowl = bowls[bowl]
            bowl += 1
        
        if frame == 10 and bowl < len(bowls):
            bowl = len(bowls)
        
    return score

def get_bowl_value(bowl):
    if bowl == 'X' or bowl == '/':
        return 10
    elif bowl == '-':
        return 0
    else:
        return int(bowl)

bowls = input()
print(get_bowling_score(bowls))