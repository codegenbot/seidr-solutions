```
def bowling_score(s):
    s = s.split(" ")
    score = 0
    roll = 0
    for i in range(len(s)):
        if s[i] == "X":
            score += 30
            roll += 1
            if i < len(s) - 1 and s[i+1] == "/":
                score += 10 + int(s[i+2])
                roll += 2
                break
        elif s[i] == "/":
            first_roll = int(s[i][1])
            score += 10 + first_roll
            roll += 2
            if i < len(s) - 2 and s[i+1] == "X" and s[i+2] == "X":
                score += 30
                break
        else:
            first_roll = int(s[i][0])
            second_roll = int(s[i][1]) if len(s[i]) > 1 else 0
            if roll < 10:
                score += first_roll + second_roll
            else:
                if first_roll + second_roll >= 10:
                    score += 10
                else:
                    score += first_roll + second_roll
            roll += 1
    return score