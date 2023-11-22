def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    strike = False
    spare = False
    
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            frame_score += 10
            if frame < 10:
                strike = True
        elif bowl == '/':
            score += 10 - frame_score
            frame_score += 10 - frame_score
            if frame < 10:
                spare = True
        elif bowl == '-':
            frame_score += 0
        else:
            score += int(bowl)
            frame_score += int(bowl)
        
        if strike:
            score += int(bowl)
            frame_score += int(bowl)
            strike = False
            frame += 1
        elif spare:
            score += int(bowl)
            frame_score += int(bowl)
            spare = False
            frame += 1
        
        if frame_score == 10:
            frame_score = 0
            frame += 1
        
        if frame > 10:
            break
    
    return score