def bowling(input_str):
    score = 0
    frames = list(input_str)
    i = 0
    frame = 1
    
    while i < len(frames) and frame <= 10:
        if frames[i] == 'X':
            score += 10
            if i+2 < len(frames):
                if frames[i+2] == 'X':
                    score += 10
                elif frames[i+2] == '/':
                    score += 10
                elif frames[i+2] != '-':
                    score += int(frames[i+2])
                    
            if i+3 < len(frames) and frames[i+2] == 'X':
                if frames[i+3] == 'X':
                    score += 10
                elif frames[i+3] == '/':
                    score += 10
                elif frames[i+3] != '-':
                    score += int(frames[i+3])
                    
            frame += 1
        elif frames[i] == '/':
            score += 10 - int(frames[i-1])
            
            if i+1 < len(frames):
                if frames[i+1] == 'X':
                    score += 10
                elif frames[i+1] != '-':
                    score += int(frames[i+1])
                    
            if i+2 < len(frames) and frames[i+1] == 'X':
                if frames[i+2] == 'X':
                    score += 10
                elif frames[i+2] == '/':
                    score += 10
                elif frames[i+2] != '-':
                    score += int(frames[i+2])
                    
            frame += 1
        elif frames[i] == '-':
            score += 0
            frame += 1
        else:
            score += int(frames[i])
            
            if i+1 < len(frames):
                if frames[i+1] == '/':
                    score += 10 - int(frames[i])
                elif frames[i+1] == 'X':
                    score += 10
                    
            frame += 1
            
        i += 1
        
    return score


input_str = input()
print(bowling(input_str))