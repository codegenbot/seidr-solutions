def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_strike = False
    is_spare = False
    
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
            if frame < 10:
                if is_strike:
                    score += 10
                if is_spare:
                    score += 10
                frame += 1
                is_strike = True
                is_spare = False
            else:
                is_strike = False
        elif bowls[i] == '/':
            score += 10 - frame_score
            if frame < 10:
                if is_strike:
                    score += 10
                frame += 1
                is_strike = False
                is_spare = True
            else:
                is_spare = False
            frame_score = 0
        elif bowls[i] == '-':
            frame_score = 0
            if frame < 10:
                frame += 1
        else:
            frame_score = int(bowls[i])
            score += frame_score
            if frame < 10:
                if is_strike:
                    score += frame_score
                if is_spare:
                    score += frame_score
            if frame_score != 10 and bowls[i+1] != '/':
                is_strike = False
                is_spare = False
            if frame_score == 10:
                is_strike = True
                is_spare = False
    
    return score