def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            strike = False
            for j in range(i + 1, min(i + 3, len(frames) + 1)):
                if not frames[j].isdigit():
                    break
                if j == i + 2:
                    score += 10 + int(frames[i])
                    strike = True
                    break
            if not strike:
                score += sum(map(int, frames[i : i + 2]))
        else:
            score += 10 + int(frames[i])
    return score