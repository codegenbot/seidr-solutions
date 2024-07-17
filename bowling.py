def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == "X":
            score += 30
        elif frames[i].isdigit():
            if len(frames[i]) == 1:
                score += int(frames[i])
            else:
                score += (int(frames[i][:1]) + int(frames[i][1:])) * 2
        else:
            parts = frames[i].split("/")
            if "X" in parts:
                if "X" == parts[0]:
                    score += 10 + int(parts[1])
                else:
                    score += int(parts[0]) + (10 - int(parts[0]))
            elif len(parts) > 1:
                score += sum(map(int, parts))
    return score