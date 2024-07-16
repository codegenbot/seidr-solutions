def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames) - 1:
        if frames[i] == "X":
            score += 30
            i += 1
            if frames[i] == "/":
                score += int(frames[i + 1].replace("/", ""))
                i += 1
        elif frames[i:i+2].count("X") == 1:
            score += int(frames[i].replace("/", "")) + int(frames[i+1].replace("/", ""))
            i += 2
        else:
            score_sum = sum(int(x) for x in (frames[i:i+2].replace("/", "")))
            if score_sum < 10:
                score += score_sum
                i += 1
                score += int(frames[i].replace("/", ""))
                i += 1
            else:
                score += score_sum
                i += 2
    return score