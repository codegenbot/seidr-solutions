def bowling_score(bowls):
    score = 0
    frames = []
    for i in range(0, len(bowls), 2):
        if bowls[i] == "X":
            frames.append(10)
            frames.append(0)
        else:
            if bowls[i] == "/":
                frames.append(10 - int(bowls[i - 1]))
            else:
                frames.append(int(bowls[i]))
    for i in range(0, len(frames), 2):
        if frames[i] == 10:
            score += 10 + frames[i + 2] + frames[i + 4]
        else:
            if frames[i] + frames[i + 1] == 10:
                score += 10 + frames[i + 2]
            else:
                score += frames[i] + frames[i + 1]
    return score


bowls = input()
print(bowling_score(bowls))