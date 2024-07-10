def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                if bowls[bowl_index + 2] == 'X':
                    score += 10
                else:
                    score += sum(int(b) if b.isdigit() else 0 for b in bowls[bowl_index + 1:bowl_index + 3])
        elif bowl == '/':
            score += 10 - int(bowls[bowl_index - 1])
        elif bowl != '-':
            score += int(bowl)
        
        if bowl == 'X' or bowl == '/':
            bowl_index += 1
        frame += 1
    
    return score