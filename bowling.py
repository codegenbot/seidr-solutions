def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            s1, s2 = map(int, re.split("/", frames[i * 2 : i * 2 + 2]))
            score += max(s1, 10) + max(s2, 10)
        elif "X" in frames[i*2:i*2+2]:
            if i < 9:
                score += 30
            else:
                score += 10 + sum(map(int, frames[19:]))
        else:
            s1 = int(frames[i * 2])
            s2 = int(frames[i * 2 + 1]) if i != 9 else 0
            score += s1 + s2
    return score