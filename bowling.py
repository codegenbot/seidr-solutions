def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char == "X":
            score += 30
            frame += 1
        elif char == "/":
            strike = True
            frame += 1
        else:
            if strike:
                score += 10 + int(char)
                strike = False
            else:
                score += int(char) + (int(char) * 2)
    return score