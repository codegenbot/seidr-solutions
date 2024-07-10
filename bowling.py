def bowling_score(bowls):
    score = 0
    current_frame = 1
    bowl_index = 0

    while current_frame <= 10:
        if bowls[bowl_index] == 'X':
            score += 10
            if current_frame < 10:
                if bowls[bowl_index + 2] == 'X':
                    score += 10
                else:
                    score += sum(int(x) if x.isdigit() else 0 for x in bowls[bowl_index + 1:bowl_index + 3])
                bowl_index += 1
        elif bowls[bowl_index] == '/':
            score += 10 - int(bowls[bowl_index - 1])
        else:
            score += int(bowls[bowl_index])
        if bowls[bowl_index] in 'X/':
            bowl_index += 1
        else:
            bowl_index += 2
        current_frame += 1

    return score