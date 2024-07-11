def bowling(input_str):
    score = 0
    frames = input_str.split("/")
    for frame in frames:
        if frame == "X":
            score += 10
        else:
            for roll in frame:
                if roll == "X":
                    score += 10
                elif roll == "-":
                    score += 0
                else:
                    score += int(roll)
    return score