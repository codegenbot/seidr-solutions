def calculate_bowling_score(input_string):
    score = 0
    frames = input_string.split("-")
    for i in range(len(frames)):
        frame = frames[i]
        if frame == "X":
            score += 10
            if i + 1 < len(frames):
                if frames[i + 1] == "X":
                    score += 10
                else:
                    score += int(frames[i + 1][0])
        else:
            for roll in frame:
                score += int(roll)
    return score