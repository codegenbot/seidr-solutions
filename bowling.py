def calculate_score(bowls):
    score = 0
    frame = 1
    i = 0
    while i < len(bowls):
        if frame == 10:
            if bowls[i] == 'X':
                score += 10
                score += get_bowl_value(bowls[i+1])
                score += get_bowl_value(bowls[i+2])
            else:
                score += get_bowl_value(bowls[i])
                score += get_bowl_value(bowls[i+1])
                if bowls[i+1] == '/':
                    score += get_bowl_value(bowls[i+2])
            i += 1
        else:
            if bowls[i] == 'X':
                score += 10
                score += get_bowl_value(bowls[i+1])
                score += get_bowl_value(bowls[i+2])
                frame += 1
            elif bowls[i+1] == '/':
                score += 10
                score += get_bowl_value(bowls[i+2])
                frame += 1
                i += 1
            else:
                score += get_bowl_value(bowls[i])
                score += get_bowl_value(bowls[i+1])
                frame += 1
                i += 1
        i += 1
    return score

def get_bowl_value(bowl):
    if bowl == 'X' or bowl == '/':
        return 10
    elif bowl == '-':
        return 0
    else:
        return int(bowl)

bowls = input().strip()
score = calculate_score(bowls)
print(score)