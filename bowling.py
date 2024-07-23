def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if i < 8:
                score += 30
            else:
                score += 10 + int(frames[i+1][0])
        elif frames[i] == '/':
            score += 10 + int(frames[i-1])
        else:
            strike = 0
            for j in range(i, min(i+2, len(frames))):
                if frames[j] == 'X':
                    strike += 30
                    break
                elif frames[j] == '/':
                    score += 10 + int(frames[j-1])
                    break
                else:
                    score += int(frames[j])
            if strike > 0:
                score += strike
    return score