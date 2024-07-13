def bowling_score(s):
    score = 0
    roll = 0
    prev_roll = 0
    for i in range(0, len(s), 2):
        frame = s[i:i+2]
        if frame == "X ":
            score += 30
            roll += 1
            score += int(s[2*i+2]) + int(s[2*(i+1)+2])
        elif frame == "//":
            score += 20
            roll += 2
            score += int(s[2*i+4])
        elif frame[0] == "/":
            if int(frame[1:]) < 10:
                score += 10 + int(frame[1:])
                roll += 2
            else:
                score += 10 + int(frame[1:])
                roll += 1
                score += int(s[2*i+3])
        else:
            if int(frame) < 10:
                score += 10 + int(frame)
                roll += 2
            else:
                score += 10 + int(frame)
                roll += 1
    return score