def bowling_score(s):
    score = 0
    for i in range(10):
        if s[i] == "X":
            score += 30
        elif s[i].isdigit():
            strike = False
            frame_score = int(s[i])
            for j in range(i + 1, 11):
                if s[j] == "/":
                    frame_score += 10 - int(s[j - 1])
                    break
                elif s[j].isdigit():
                    frame_score += int(s[j])
                    strike = True
                    break
            if not strike:
                score += frame_score
        else:
            parts = s[i].split("/")
            for part in parts:
                score += int(part)
    return score