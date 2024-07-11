```
def bowling_score(frames):
    score = 0
    frames = frames.replace('/', '-').split('-')
    for i in range(10):
        if len(frames[i]) == 2:
            score += int(frames[i])
        elif frames[i] == 'X':
            score += 10
            if i < 9:
                if frames[i+1][0] == 'X':
                    score += 10
                else:
                    score += int(frames[i+1])
        else:
            strike = 0
            spare = False
            for part in frames[i]:
                if part == 'X':
                    score += 10
                    strike = 1
                    break
                elif part != '0':
                    score += int(part)
                    spare = True
            if strike:
                if i < 9:
                    score += 10
                    for part in frames[i+1]:
                        if part == 'X':
                            score += 10
                            break
                        else:
                            score += int(part)
            elif spare:
                score += 10
    return score