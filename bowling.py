def bowling_score(input_str):
    score = 0
    frames = input_str.split("/")
    for frame in frames:
        for char in frame:
            if char == "X":
                score += 10
            elif char == "-":
                score += 0
            else:
                score += int(char)
    return score