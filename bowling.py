def calculate_score(bowls):
    score = 0
    frame = 1
    i = 0
    
    while frame <= 10:
        if bowls[i] == 'X':
            score += 10
            if i + 2 < len(bowls):
                score += get_bowl_value(bowls[i+1])
                score += get_bowl_value(bowls[i+2])
            frame += 1
            i += 1
        elif bowls[i] == '/':
            score += 10 - get_bowl_value(bowls[i-1])
            if i + 1 < len(bowls):
                score += get_bowl_value(bowls[i+1])
            frame += 1
            i += 1
        else:
            score += get_bowl_value(bowls[i])
            frame += 1
        i += 1

    return score

def get_bowl_value(bowl):
    if bowl == 'X' or bowl == '/':
        return 10
    elif bowl == '-':
        return 0
    else:
        return int(bowl)

bowls = input()
print(calculate_score(bowls))