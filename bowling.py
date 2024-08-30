def bowling_score(frames):
    score = 0
    for i in range(len(frames) // 2 + len(frames) % 2):
        if frames[2 * i] == "X":
            score += 30
        elif frames[2 * i] in ["/10"]:
            if i < 9 and frames[2 * i + 1] == "/":
                score += int(frames[2 * i - 1].replace("/", "")) + 10 + (30 - 10)
            else:
                score += 10 + int(frames[2 * i - 1].replace("/", ""))
        else:
            score += sum(map(int, frames[2 * i : 2 * i + 2].split("/")))
    return score