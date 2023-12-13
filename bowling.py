def bowling_score(bowls):
    score = 0
    frames = []
    for i in range(10):
        if bowls[0] == 'X':
            frames.append(10)
            bowls = bowls[1:]
        else:
            if bowls[1] == '/':
                frames.append(10)
                bowls = bowls[2:]
            else:
                frames.append(int(bowls[0]) + int(bowls[1]))
                bowls = bowls[2:]
    for i in range(len(frames)):
        score += frames[i]
        if frames[i] == 10:
            if bowls[0] == 'X':
                score += 10
            else:
                score += int(bowls[0])
        elif frames[i] == 20:
            score += int(bowls[0])
    return score