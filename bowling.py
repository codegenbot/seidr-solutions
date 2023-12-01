def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    i = 0
    
    while i < len(bowls):
        if frame == 10:
            if bowls[i] == 'X':
                score += 10
                i += 1
                frame_score += 1
                if bowls[i] == 'X':
                    score += 10
                    i += 1
                    frame_score += 1
                    if bowls[i] == 'X':
                        score += 10
                        frame_score += 1
                    else:
                        score += int(bowls[i])
                    i += 1
                    if bowls[i] == 'X':
                        score += 10
                        frame_score += 1
                    else:
                        score += int(bowls[i])
                    i += 1
                else:
                    score += int(bowls[i])
                    i += 1
                    if bowls[i] == '/':
                        score += 10 - int(bowls[i-1])
                        frame_score += 1
                    else:
                        score += int(bowls[i])
                        frame_score += 1
                    i += 1
                    if bowls[i] == 'X':
                        score += 10
                        frame_score += 1
                    else:
                        score += int(bowls[i])
                        frame_score += 1
                    i += 1
            else:
                score += int(bowls[i])
                i += 1
                if bowls[i] == '/':
                    score += 10 - int(bowls[i-1])
                    frame_score += 1
                else:
                    score += int(bowls[i])
                    frame_score += 1
                i += 1
                if bowls[i] == 'X':
                    score += 10
                    frame_score += 1
                else:
                    score += int(bowls[i])
                    frame_score += 1
                i += 1
        else:
            if bowls[i] == 'X':
                score += 10
                frame_score += 1
                i += 1
            else:
                score += int(bowls[i])
                i += 1
                if bowls[i] == '/':
                    score += 10 - int(bowls[i-1])
                    frame_score += 1
                else:
                    score += int(bowls[i])
                    frame_score += 1
                i += 1
                
        if frame_score == 2 or bowls[i-1] == 'X':
            frame += 1
            frame_score = 0
    
    return score

bowls = input()
print(calculate_bowling_score(bowls))