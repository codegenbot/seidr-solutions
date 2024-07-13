```
def bowling_score(s):
    score = 0
    roll = 0
    for i, frame in enumerate(s.split('/')):
        if len(frame) == 2 and frame[1].isdigit():
            strike = int(frame[1])
            score += 10 + (10 - i)
            while roll < 9:
                if i+1 < len(s) and s[i+1] == "X":
                    score += 10
                    roll += 1
                    break
                elif i+1 < len(s):
                    score += int(s[i+1].split()[0])
                    roll += 1
                    break
        elif frame == "X":
            score += 10 + (10 - i)
            roll += 1
            while roll < 9:
                if s[roll*2:].count("X") >= 2:
                    score += 30
                    roll += 2
                    break
                else:
                    score += int(s[roll*2:])
                    roll += 1
        elif len(frame) == 3 and frame[0] != "X":
            spare = int(frame[2])
            score += 10 + spare
            if i < 8:
                while roll < 9:
                    if s[roll*2:].count("X") >= 2:
                        score += 30
                        roll += 2
                        break
                    else:
                        score += int(s[roll*2:])
                        roll += 1
        else:
            score += sum(map(int, frame.split()))
            roll += 1
    return score