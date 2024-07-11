```
def bowling_score(s):
    s = s.replace("/","2").replace("X","10").replace("S","5")
    i = 0
    while i < len(s):
        if s[i] == "X":
            score = 10
            i += 1
            if i < len(s) and (s[i] == "/" or s[i].isdigit()):
                if s[i] == "/":
                    score += 10
                else:
                    score += int(s[i])
                i += 1
        elif s[i] == "/":
            score = 10
            i += 1
            score += int(s[i])
            i += 1
        else:
            if len(s) - i >= 2 and s[i:i+2].isdigit():
                score = int(s[i:i+2])
                i += 2
            else:
                score = int(s[i])
                i += 1
        if score == 10:
            try:
                frame = s[i:i+2]
                score += int(frame)
                i += 2
            except ValueError:
                pass
    return score