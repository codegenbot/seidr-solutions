def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames:
        if frame == "X":
            score += 30
            frame_num -= 1
        elif frame == "/":
            score += 10
            frame_num -= 1
        else:
            strike = False
            spare = False
            for char in str(frame):
                if char == "X":
                    score += 10
                    strike = True
                elif char == "/":
                    score += 10 - int(char)
                    spare = True
                else:
                    score += int(char)
            if not strike and not spare:
                frame_num -= 1
    return score