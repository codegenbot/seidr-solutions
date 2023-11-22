def calculate_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    
    while frame <= 10:
        if bowls[bowl_index] == 'X':
            score += 10
            if bowl_index + 2 < len(bowls):
                score += get_bowl_score(bowls[bowl_index + 1])
                score += get_bowl_score(bowls[bowl_index + 2])
            bowl_index += 1
        elif bowls[bowl_index] == '/':
            score += 10 - get_bowl_score(bowls[bowl_index - 1])
            if bowl_index + 1 < len(bowls):
                score += get_bowl_score(bowls[bowl_index + 1])
            bowl_index += 1
        else:
            score += get_bowl_score(bowls[bowl_index])
            
        frame += 1
        bowl_index += 1
    
    return score

def get_bowl_score(bowl):
    if bowl == '-':
        return 0
    else:
        return int(bowl)

bowls = input().strip()
score = calculate_score(bowls)
print(score)