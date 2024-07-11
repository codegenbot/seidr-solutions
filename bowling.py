def bowling(input_str):
    score = 0
    frames = input_str.split("/")
    
    for i, frame in enumerate(frames):
        if frame == "X":
            score += 10
            score += sum(map(int, frames[i+1][:2]))
        else:
            for roll in frame:
                if roll == "X":
                    score += 10
                elif roll == "-":
                    score += 0
                else:
                    score += int(roll)
    
    return score