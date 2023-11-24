def calculate_score(round):
    score = 0
    frame = 0
    is_strike = False
    is_spare = False
    previous_is_strike = False
    previous_is_spare = False
    for i in range(len(round)):
        if round[i] == 'X':
            score += 10
            if previous_is_strike:
                score += 10
            if previous_is_spare:
                score += 10
            previous_is_strike = True
            previous_is_spare = False
            if frame == 9:
                is_strike = True
            else:
                frame += 1
        elif round[i] == '/':
            score += 10 - int(round[i-1])
            if previous_is_strike:
                score += 10
            if previous_is_spare:
                score += 10
            previous_is_strike = False
            previous_is_spare = True
            if frame == 9:
                is_spare = True
            else:
                frame += 1
        elif round[i] == '-':
            if previous_is_strike:
                score += 10
            if previous_is_spare:
                score += 10
            previous_is_strike = False
            previous_is_spare = False
            if frame == 9:
                is_strike = True
            else:
                frame += 1
        else:
            score += int(round[i])
            if previous_is_strike:
                score += int(round[i])
            if previous_is_spare:
                score += int(round[i])
            previous_is_strike = False
            previous_is_spare = False
            if frame == 9:
                is_strike = True
            else:
                frame += 1

    if is_strike:
        score += int(round[-2]) + int(round[-1])
    elif is_spare:
        score += int(round[-1])
    
    return score