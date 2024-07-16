def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i*2] == "X":
            score += 30
        elif len(frames[i*2:i*2+3]) > 2 and "/X" in frames[i*2:i*2+3]:
            score += 30 + int(frames[i*2+3].replace("/",""))
        elif len(frames[i*2:i*2+3]) > 2 and "/" in frames[i*2:i*2+3]:
            score += sum(int(x) for x in (frames[i*2:i*2+2].replace("/", "")))
            score += int(frames[i*2+2].replace("/",""))
        else:
            score += sum(int(x) for x in (frames[i*2:i*2+2].replace("/", "")))
    return score