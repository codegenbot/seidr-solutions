def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            if i < 9:
                if frames[i + 1] != "/":
                    return "Invalid input"
            score += (
                10
                + (10 - int(frames[i - 1]) if i > 0 else 0)
                + (10 - int(frames[i + 2]) if i < 8 else 0)
            )
        elif frames[i] == "/":
            if i < 9:
                score += (
                    10 - int(frames[i - 1]) + (10 - int(frames[i + 1]) if i < 8 else 0)
                )
        else:
            score += sum(int(x) for x in frames[i : i + 2])
    return score