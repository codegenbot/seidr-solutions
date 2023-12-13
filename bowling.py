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
                is_strike = True
            else:
                frame_score += 10
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                is_spare = True
            else:
                frame_score += 10 - frame_score
        elif bowl == '-':
            if frame < 10:
                frame_score += 0
            else:
                frame_score += 0
        else:
            score += int(bowl)
            frame_score += int(bowl)
        
        if is_strike:
            score += frame_score
            frame_score = 0
            is_strike = False
            frame += 1
        elif is_spare:
            score += frame_score
            frame_score = 0
            is_spare = False
            frame += 1
        
        if frame < 10:
            if frame_score == 10:
                is_spare = True
                frame_score = 0
                frame += 1
            elif frame_score > 10:
                is_strike = True
                frame_score = 0
                frame += 1
        else:
            if frame_score == 10:
                is_spare = True
                frame_score = 0
            elif frame_score > 10:
                is_strike = True
                frame_score = 0
    
    return score

bowls = input()
print(calculate_score(bowls))