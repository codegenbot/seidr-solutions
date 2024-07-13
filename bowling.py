def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 10 + (10 - int(frames[i + 1].split("/")[0])) if frame < 9 else 10
        elif frames[i] == "/":
            score += 10 - int(frames[i + 1].split("/")[0])
        else:
            score += sum(map(int, frames[i : i + 2]))
        frame += 1
    return score