def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == 'X':
            score += 10
            if frame < 10:
                score += calculate_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index + 1] == '/':
            score += 10
            if frame < 10:
                score += calculate_spare_bonus(bowls, bowl_index)
            bowl_index += 2
        else:
            try:
                score += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
            except ValueError:
                pass
            bowl_index += 2
        frame += 1
    return score

# Rest of the code...