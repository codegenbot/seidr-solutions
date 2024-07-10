def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char == "X":
            score += 30
            frame -= 1
        elif char == "/":
            continue
        else:
            strike = False
            if char == "7" or char == "8" or char == "9":
                strike = True
            if strike:
                score += 10 + int(char) * 10
            else:
                score += int(char)
    return score