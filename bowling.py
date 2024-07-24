def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i + 1].isdigit():
            strike = False
            while i < len(frames) and (frames[i].isdigit() and frames[i + 1].isdigit()):
                score += int(frames[i])
                if i == len(frames) - 2:
                    break
                i += 2
        else:
            score += sum(map(int, frames[i : i + 2]))
    return score