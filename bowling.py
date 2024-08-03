def bowling_score(frames):
    score = 0
    frame_count = 1
    for char in frames:
        if char == "X":
            score += 30
        elif char == "/":
            continue
        else:
            strike = False
            if char == "7" or char == "8" or char == "9" or char == "10":
                score += int(char)
            else:
                score += 1
            if frame_count < 10 and (char == "0" or char == "1"):
                next_char = frames[frame_count]
                if next_char == "/":
                    score += 10 - int(char)
                    break
                elif next_char == "X":
                    score += 30 - int(char)
                    strike = True
                    break
            frame_count += 1
    return score