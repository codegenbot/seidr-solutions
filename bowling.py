Here is the solution:

def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
            frame += 1
        elif frames[i:i+2] == '///' or frames[i:i+2].startswith('X/'):
            score += int(frames[i])
            frame += 1
        else:
            strike = False
            for j in range(i, i+3):
                if frames[j] == 'X':
                    strike = True
                    break
            if strike:
                score += 10 + int(frames[i])
                frame += 1
            elif frames[i:i+2].isdigit():
                score += int(frames[i:i+2])
                frame += 1
    return score