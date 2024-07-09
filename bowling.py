def bowling_score(frames):
    score = 0
    prev_frame = 0
    for char in frames + "X":  
        if char == "X":
            score += 30
        elif char == "/":
            if prev_frame < 10:  
                score += 10 + int(frames[frames.index(char) - 1])
            else:
                score += 10 + 10  
        elif char == "-":
            if prev_frame < 10:  
                score += 10 + int(frames[frames.index(char) - 1])
            else:
                score += 10  
        else:
            score += int(char)
        prev_frame = char == "X" or (char == "/" and frames[frames.index(char) - 1] != "9")
    return score