```
def bowling_score(s):
    score = 0
    roll = 0
    for frame in s.split():
        if len(frame) == 2 and frame[1] == "/":
            if int(frame[0]) + 5 > 10:
                score += 15
                while roll < 2:
                    if s.split()[roll].endswith("X"):
                        score += 30
                        roll += 1
                    elif s.split()[roll][1] == "/":
                        score += 10 + int(s.split()[roll][0])
                        roll += 2
                    else:
                        score += int(s.split()[roll])
                        roll += 1
            else:
                score += 10 + int(frame[0])
        elif frame == "X":
            score += 30
            while roll < 2:
                if s.split()[roll].endswith("X"):
                    score += 30
                    roll += 1
                elif s.split()[roll][1] == "/":
                    score += 10 + int(s.split()[roll][0])
                    roll += 2
                else:
                    score += int(s.split()[roll])
                    roll += 1
        else:
            score += int(frame)
        roll += 1
    return score