def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i * 2] == "X":
            score += 30
        elif frames[i * 2 : i * 2 + 2].count("X") == 1:
            score += int(frames[i * 2].replace("/", "")) + int(
                frames[i * 2 + 1].replace("/", "")
            )
        else:
            score += sum(int(x) for x in (frames[i * 2 : i * 2 + 2].replace("/", "")))
    return score