def bowling(s):
    score = 0
    frames = s.split("/")
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < 9:
                if s[i + 1] == "X":
                    score += 10
                else:
                    score += int(s[i + 1])
                    if s[i + 2] == "/":
                        score += 10 - int(s[i + 1])
                    elif s[i + 2] != "-":
                        score += int(s[i + 2])
        else:
            for j in range(len(frames[i])):
                if frames[i][j] == "X":
                    score += 10
                elif frames[i][j] == "-":
                    score += 0
                else:
                    score += int(frames[i][j])
    return score


s = input()
print(bowling(s))