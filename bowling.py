def bowling_score(s):
    score = 0
    frames = [int(x) for x in re.findall("\d+", s)]
    for i in range(len(frames)):
        if len(frames[i:]) >= 2 and sum(frames[i : i + 2]) == 10:
            score += 10 + (10 - sum(frames[i : i + 2])) * (9 - i)
        else:
            score += frames[i]
    return score