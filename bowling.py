def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            strike = False
            spare = False
            if len(frames) - frames.index(char) < 2:
                if char == "X":
                    score += 10 + (10 * (frame - 1))
                    frame += 1
                else:
                    score += int(char)
                    frame += 1
            elif char != "/":
                score += int(char)
                if len(frames) - frames.index(char) < 2:
                    strike = True
            else:
                spare = True
        elif char == "X":
            score += 10 + (10 * (frame - 1))
            frame += 1
        elif char != "/":
            score += int(char)
    return score