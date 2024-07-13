def bowling_score(s):
    score = 0
    roll = 0
    i = 0
    while i < len(s):
        if s[i] == "X":
            score += 30
            roll += 1
            i += 1
            if s[i] == "X" or (s[i] == "/" and s[i+1].isdigit()):
                score += int(s[i+1]) + int(s[i+2])
                roll += 2
        elif s[i] == "/":
            score += 10
            roll += 1
            i += 1
            if s[i] == "X" or (s[i].isdigit() and s[i+1].isdigit()):
                score += int(s[i]) + int(s[i+1])
                roll += 2
        else:
            frame = 0
            for j in range(i, i+2):
                if s[j] == "/":
                    score += 10 - int(s[j-1])
                    roll += 1
                    break
                elif s[j].isdigit():
                    frame += int(s[j])
            score += frame
            roll += 1
        i += 2
    return score