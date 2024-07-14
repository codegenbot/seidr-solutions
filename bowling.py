```
def bowling_score(frames):
    score = 0
    frame_count = 0
    
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            strike = False
            spare = False
            
            if int(frames[i]) + int(frames[i+1]) > 10:
                score += 10
                frame_count += 1
                continue
                
            score += int(frames[i]) + int(frames[i+1])
            frame_count += 1
        elif frames[i] == 'X':
            strike = True
            score += 10
            frame_count += 1
        else:
            if '/' in frames[i]:
                spare = True
                score += 2
                frame_count += 1
            else:
                score += int(frames[i])
                frame_count += 1
        
        if strike and not spare:
            for _ in range(2):
                if i < len(frames) - 1:
                    if frames[i+1].isdigit():
                        score += int(frames[i+1])
                        frame_count += 1
                    elif frames[i+1] == 'X':
                        score += 10
                        frame_count += 1
                    else:
                        if '/' in frames[i+1]:
                            score += 2
                            frame_count += 1
            break
        elif spare and not strike:
            for _ in range(2):
                if i < len(frames) - 1:
                    if frames[i+1].isdigit():
                        score += int(frames[i+1])
                        frame_count += 1
                    elif frames[i+1] == 'X':
                        score += 10
                        frame_count += 1
                    else:
                        if '/' in frames[i+1]:
                            score += 2
                            frame_count += 1
            break
    
    return score