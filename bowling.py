def calculate_score(bowls):
    score = 0
    frame = 1
    frame_index = 0
    while frame <= 10:
        if bowls[frame_index] == 'X':
            score += 10
            if frame_index < len(bowls) - 2:
                if bowls[frame_index + 2] == '/':
                    score += 10
                else:
                    score += calculate_bowl_value(bowls[frame_index + 1]) + calculate_bowl_value(bowls[frame_index + 2])
                frame_index += 1
        elif bowls[frame_index] == '/':
            score += 10 - calculate_bowl_value(bowls[frame_index - 1])
            if frame_index < len(bowls) - 1:
                score += calculate_bowl_value(bowls[frame_index + 1])
        else:
            score += calculate_bowl_value(bowls[frame_index])
        frame += 1
        frame_index += 1
    return score

def calculate_bowl_value(bowl):
    if bowl == 'X':
        return 10
    elif bowl == '-':
        return 0
    else:
        return int(bowl)

bowls = input().strip()
print(calculate_score(bowls))