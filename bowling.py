def bowling_score(bowls):
    score = 0
    frame = 1
    ball = 0
    frames = bowls.split("/")
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if frame < 10:
                if bowls[ball + 2] == "X":
                    score += 10
                else:
                    score += int(bowls[ball + 1]) + int(bowls[ball + 2])
                ball += 1
            frame += 1
        else:
            score += sum(int(x) for x in frames[i])
            if frame < 10:
                if frames[i][1] == "X":
                    score += 10
                elif frames[i][1] == "-":
                    score += 0
                else:
                    score += int(frames[i][1])
            frame += 1
            ball += 2
    return score


bowls = input()
print(bowling_score(bowls))