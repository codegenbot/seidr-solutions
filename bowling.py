Here is the completed code:

def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += int(frames[i+1]) + 10
        else:
            strike = 0
            frame_score = 0
            for j in range(2):
                if frames[i+j] == 'X':
                    strike = 2
                    break
                elif frames[i+j] == '/':
                    frame_score += int(frames[i+1+j])
                    break
                else:
                    frame_score += int(frames[i+j])
            score += frame_score + (10-strike)
    return score