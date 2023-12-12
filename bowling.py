def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    spare = False
    strike = False
    
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                frame_score = 10
                strike = True
            else:
                frame_score += 10
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                frame_score = 10
                spare = True
            else:
                frame_score += 10 - frame_score
        elif bowl == '-':
            if frame < 10:
                frame_score = 0
            else:
                frame_score += 0
        else:
            score += int(bowl)
            if frame < 10:
                frame_score += int(bowl)
        
        if frame < 10:
            if spare or strike:
                score += int(bowl)
                frame_score += int(bowl)
                spare = False
                strike = False
            
            if frame_score == 10:
                frame += 1
                frame_score = 0
        
    return score

bowls = input()
print(calculate_score(bowls))