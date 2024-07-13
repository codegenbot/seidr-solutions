def bowling_score(s):
    score = 0
    roll = 0
    for i in range(0, len(s), 2):
        frame = s[i:i+2]
        if frame == "X ": 
            score += 10 + int(s[i+2:i+4])
            roll += 1
        elif frame[0] == "/":
            if frame[1].isdigit():
                score += 10 + int(frame[1])
            else:
                score += 10 + int(s[i+2:i+3])
            roll += 1
        else:
            total = sum(map(int, frame))
            if total < 10: 
                score += total
            elif total == 10:
                try:
                    score += 10 + int(s[i+2])
                except IndexError:
                    score += 10
            roll += 1