def get_strike_bonus(bowls, index):
    score = 10

    if bowls[index] == 'X':
        score += 10
        if bowls[index + 1] == 'X':
            score += 10
            if bowls[index + 2] == 'X':
                score += 10
            elif bowls[index + 2] == '/':
                score += 10
            else:
                score += int(bowls[index + 2])
        elif bowls[index + 1] == '/':
            score += 10
        else:
            score += int(bowls[index + 1])

    elif bowls[index] == '/':
        score += 10 - int(bowls[index - 1])

    else:
        score += int(bowls[index])
        if bowls[index + 1] != '-':
            score += int(bowls[index + 1])
    
    index += 1  # Increment index to move to the next frame

    return score, index