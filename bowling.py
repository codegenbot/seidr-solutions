def calculate_score(bowls):
    frames = [0] * 10
    frame_index = 0
    bowl_index = 0
    while frame_index < 10:
        if bowls[bowl_index] == 'X':
            frames[frame_index] = 10 + calculate_bonus(bowls, bowl_index, 2)
            bowl_index += 1
        elif bowls[bowl_index + 1] == '/':
            frames[frame_index] = 10 + calculate_bonus(bowls, bowl_index, 1)
            bowl_index += 2
        else:
            frames[frame_index] = int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
            bowl_index += 2
        frame_index += 1
    return sum(frames)

def calculate_bonus(bowls, bowl_index, num_bonus_bowls):
    bonus_score = 0
    for i in range(num_bonus_bowls):
        bowl_index += 1
        if bowls[bowl_index] == 'X':
            bonus_score += 10
        elif bowls[bowl_index] == '/':
            bonus_score += 10 - int(bowls[bowl_index - 1])
        else:
            bonus_score += int(bowls[bowl_index])
    return bonus_score

bowls = input()
score = calculate_score(bowls)
print(score)