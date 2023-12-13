def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_strike = False
    is_spare = False
    extra_bowls = 0
    
    for bowl in bowls:
        if extra_bowls > 0:
            extra_bowls -= 1
            score += int(bowl)
            continue
        
        if bowl == 'X':
            score += 10
            if frame <= 9:
                extra_bowls = 2
                is_strike = True
            else:
                is_strike = False
        elif bowl == '/':
            score += 10 - frame_score
            if frame <= 9:
                extra_bowls = 1
                is_spare = True
            else:
                is_spare = False
        elif bowl == '-':
            score += 0
        else:
            score += int(bowl)
        
        frame_score = int(bowl)
        
        if is_strike:
            frame += 1
            is_strike = False
        elif is_spare:
            frame += 1
            is_spare = False
        else:
            if frame_score != 10:
                frame_score = 0
    
    return score