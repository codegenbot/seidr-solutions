def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(len(frames)):
        if frames[i] == 'X':
            if frame < 10:
                score += 30
                frame -= 1
        elif frames[i] == '/':
            if frame < 10:
                score += 10 + int(frames[i+1])
                frame -= 1
        else:
            if frame < 10 and int(frames[i]) == 10:
                score += 10 + int(frames[i+1]) + int(frames[i+2])
                frame -= 3
            elif frame < 10:
                score += int(frames[i]) + int(frames[i+1])
                frame -= 2
    return score