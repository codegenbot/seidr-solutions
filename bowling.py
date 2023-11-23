def calculate_bowling_score(input_string):
    score = 0
    frames = input_string.split("/")
    for frame in frames:
        if frame == "X":
            score += 10
        else:
            score += int(frame[0])
            if len(frame) > 1:
                score += int(frame[1])
    return score