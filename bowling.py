def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == 'X':
            score += 10
            if bowl_index + 2 < len(bowls):
                if bowls[bowl_index + 2] == 'X':
                    score += 10
                elif bowls[bowl_index + 2] == '/':
                    score += 10 - int(bowls[bowl_index + 1])
                else:
                    score += int(bowls[bowl_index + 1]) + int(bowls[bowl_index + 2])
            bowl_index += 1
        elif bowls[bowl_index + 1] == '/':
            score += 10
            if bowl_index + 2 < len(bowls):
                if bowls[bowl_index + 2] == 'X':
                    score += 10
                else:
                    score += int(bowls[bowl_index + 2])
            bowl_index += 2
        else:
            score += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
            bowl_index += 2
        frame += 1
    return score

bowls = input()
print(calculate_bowling_score(bowls))