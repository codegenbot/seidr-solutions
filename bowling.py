def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i + 1].isdigit():
            strike_count = int(frames[i]) + int(frames[i + 1])
            score += strike_count
        elif frames[i] == "X":
            score += 10 + int(frames[i - 1 : i + 1].replace("/", "")) * 2
        else:
            score += (
                sum(int(x) for x in frames[i].split("/"))
                if "/" in frames[i]
                else int(frames[i])
            )
    return score