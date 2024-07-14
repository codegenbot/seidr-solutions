```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] != '-':
            strike = False
            if i < len(frames) - 1 and frames[i+1] != '/':
                spare = False
                while i < len(frames) - 1 and frames[i:i+3].count('/'):
                    score += 10 + int(frames[i+2])
                    i += 2
                    frame -= 1
                    if not spare:
                        spare = True
            else:
                score += 10
        else:
            score += 10 + int(frames[i+1]) + int(frames[i+3])
        frame -= 1
    return score