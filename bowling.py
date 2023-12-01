def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10 and bowl_index < len(bowls):
        if bowls[bowl_index] == 'X':
            score += 10 + get_bowl_value(bowls, bowl_index + 1) + get_bowl_value(bowls, bowl_index + 2)
            bowl_index += 1
        elif bowls[bowl_index] == '/':
            score += 10 - get_bowl_value(bowls, bowl_index - 1) + get_bowl_value(bowls, bowl_index + 1)
            bowl_index += 1
        else:
            score += int(bowls[bowl_index])
        bowl_index += 1
        frame += 1
    return score

def get_bowl_value(bowls, index):
    if index >= len(bowls):
        return 0
    if bowls[index] == 'X':
        return 10
    elif bowls[index] == '/':
        return 10 - int(bowls[index-1])
    else:
        return int(bowls[index])

bowls = input()
print(calculate_bowling_score(bowls))