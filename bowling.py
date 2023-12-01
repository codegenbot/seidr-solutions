def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_strike = False
    is_spare = False
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                frame += 1
            if is_strike:
                score += 10
            if is_spare:
                score += 10
                is_spare = False
            is_strike = True
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                frame += 1
            if is_strike:
                score += 10
                is_strike = False
            is_spare = True
        elif bowl == '-':
            if is_strike:
                score += 10
            elif is_spare:
                score += 10 - frame_score
                is_spare = False
            frame_score = 0
        else:
            frame_score = int(bowl)
            score += frame_score
            if is_strike:
                score += frame_score
                is_strike = False
            if is_spare:
                score += frame_score
                is_spare = False
            if frame < 10:
                frame += 1
    return score

bowls = input()
print(calculate_score(bowls))