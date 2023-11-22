def calculate_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == 'X':
            score += 10
            if frame < 10:
                if bowls[bowl_index + 2] == 'X':
                    score += 10
                else:
                    score += int(bowls[bowl_index + 2])
                if bowls[bowl_index + 4] == '/':
                    score += 10 - int(bowls[bowl_index + 2])
                else:
                    score += int(bowls[bowl_index + 4])
                bowl_index += 2
            else:
                score += 10
                score += int(bowls[bowl_index + 2])
                score += int(bowls[bowl_index + 4])
                break
            bowl_index += 1
        elif bowls[bowl_index] == '/':
            score += 10 - int(bowls[bowl_index - 1])
            if frame < 10:
                if bowls[bowl_index + 2] == 'X':
                    score += 10
                else:
                    score += int(bowls[bowl_index + 2])
                bowl_index += 2
            else:
                score += 10
                break
        else:
            score += int(bowls[bowl_index])
            if frame == 10:
                break
            if bowls[bowl_index + 1] == '/':
                score += 10 - int(bowls[bowl_index])
            else:
                score += int(bowls[bowl_index + 1])
            bowl_index += 2
        frame += 1
    return score

bowls = input()
print(calculate_score(bowls))