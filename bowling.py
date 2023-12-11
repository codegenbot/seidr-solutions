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
                frame_score += 10
                is_strike = True
            else:
                frame_score += 10
                if is_spare:
                    score += 10
                if is_strike:
                    score += 10
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                frame_score += 10 - frame_score
                is_spare = True
            else:
                frame_score += 10 - frame_score
                if is_strike:
                    score += 10
        elif bowl == '-':
            if frame < 10:
                frame_score += 0
            else:
                frame_score += 0
        else:
            score += int(bowl)
            if frame < 10:
                frame_score += int(bowl)
            else:
                frame_score += int(bowl)
                if is_spare:
                    score += int(bowl)
                if is_strike:
                    score += int(bowl)
        
        if frame < 10 and (is_strike or is_spare or bowl == '-'):
            frame += 1
            frame_score = 0
            is_strike = False
            is_spare = False
    
    return score

bowls = input().strip()
print(calculate_score(bowls))