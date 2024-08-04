Here is the solution:

def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
        else:
            strike = 0
            for j in range(i, min(i+3, len(frames))):
                if frames[j] == 'X':
                    strike += 30
                    break
                elif frames[j] == '/':
                    strike += 10 + int(frames[j+1])
                    break
                else:
                    strike += int(frames[j])
            score += strike
    return score