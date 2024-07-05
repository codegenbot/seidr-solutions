def bowling_score(frames):
    score = 0
    strike = 0
    spare = False
    prev_frame = ''
    
    for char in frames:
        if char.isdigit():
            if spare: 
                score += int(prev_frame) + int(char)
                spare = False
            elif strike > 0:
                score += 10 + int(char)
                strike -= 1
            else:
                frame_score = int(char)
                if len(frames) - 2 >= i + 1 and frames[i+1] == '/':
                    score += frame_score + 10
                    break
                elif len(frames) - 1 >= i + 1 and frames[i+1] == 'X':
                    score += frame_score + 10
                    strike = 2
                else:
                    score += frame_score
            prev_frame = char
        elif char == '/':
            score += 10
            if len(frames) - 1 >= i + 1 and frames[i+1] == 'X':
                strike = 2
            break
        elif char == 'X':
            score += 10
            strike = 2
            break
        elif char == '-':
            continue
        
    return score