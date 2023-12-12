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
                score += frame_score
            if is_strike:
                score += frame_score
            if is_spare:
                score += frame_score
            frame_score = 10
            is_strike = True
            is_spare = False
            frame += 1
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                score += frame_score
            if is_strike:
                score += frame_score
            if is_spare:
                score += frame_score
            frame_score = 10
            is_strike = False
            is_spare = True
            frame += 1
        elif bowl == '-':
            frame_score = 0
        else:
            score += int(bowl)
            frame_score = int(bowl)
            if is_strike:
                score += frame_score
                is_strike = False
            if is_spare:
                score += frame_score
                is_spare = False
            frame += 1
    
    return score

bowls = input()
print(calculate_score(bowls))