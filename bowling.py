def bowling_score(s):
    score = 0
    frames = s.split("/")
    for i in range(10):
        if frames[i] == "X":
            score += 10
            if i < 9:
                if frames[i + 1] == "X":
                    score += 10
                else:
                    score += sum(int(x) for x in frames[i + 1] if x.isdigit())
                    if frames[i + 1][-1] == "-":
                        score += 10 - int(frames[i + 1][0])
        else:
            score += sum(int(x) for x in frames[i] if x.isdigit())
            if frames[i][-1] == "-":
                score += 10 - int(frames[i][0])
    return score


s = input()
print(bowling_score(s))