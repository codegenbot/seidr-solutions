def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i + 1].isdigit():
            strike = False
            spare = False
            total = int(frames[i]) + int(frames[i + 1])
            if total == 10:
                score += 10
                strike = True
            else:
                if i < len(frames) - 2 and frames[i + 2] == "X":
                    strike = True
                elif i > 0 and frames[i - 2 : i] in ["//", "/"]:
                    spare = True
                score += total
    return score