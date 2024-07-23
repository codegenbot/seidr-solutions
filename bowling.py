def bowling_score(bowls):
    score = 0
    frame = 1
    ball = 0
    frames = [[] for _ in range(10)]

    for bowl in bowls:
        if frame > 10:
            break

        if bowl == "X":
            frames[frame - 1].append(10)
            if frame < 10:
                frame += 1
                ball = 0
            else:
                ball = 2
        elif bowl == "/":
            frames[frame - 1].append(10 - frames[frame - 1][-1])
            if frame < 10:
                frame += 1
                ball = 0
            else:
                ball = 2
        elif bowl == "-":
            frames[frame - 1].append(0)
            ball += 1
            if ball == 2:
                frame += 1
                ball = 0
        else:
            frames[frame - 1].append(int(bowl))
            ball += 1
            if ball == 2:
                frame += 1
                ball = 0

    for i in range(10):
        if frames[i][0] == 10:
            score += 10 + sum(frames[i + 1][:2])
        elif sum(frames[i]) == 10:
            score += 10 + frames[i + 1][0]
        else:
            score += sum(frames[i])

    return score


bowls = input()
print(bowling_score(bowls))