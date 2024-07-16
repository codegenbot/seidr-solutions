def bowling(s):
    frames = [int(x) for x in re.findall(r"\d", s)]
    score = 0
    roll = 0
    for i, f in enumerate(frames):
        if i % 2 == 0:
            if f == 10:
                score += 10 + (frames[i + 1] if i < len(frames) - 1 else 0)
                roll += 1
            elif f != 0:
                score += f
                roll += 1
                if i < len(frames) - 1 and frames[i + 1] != 0:
                    score += frames[i + 1]
                    roll += 1
        else:
            if f == 10:
                score += 10
                roll += 1
                if i < len(frames) - 2 and frames[i + 1] + frames[i + 2] <= 10:
                    score += frames[i + 1] + frames[i + 2]
                    roll += 2
            elif f != 0:
                score += f
                roll += 1
    return score if roll == 10 else 0