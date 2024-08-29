def bowling(score):
    frames = score.split("/")
    total_score = 0
    for i in range(0, len(frames), 2):
        if i + 1 < len(frames) and frames[i + 1] == "X":
            total_score += 10 + int(frames[i])
        elif i + 1 < len(frames) and frames[i + 1].isdigit():
            total_score += 10 - int(frames[i + 1]) + int(frames[i])
        else:
            total_score += int(frames[i]) + int(frames[i + 1])
    return total_score