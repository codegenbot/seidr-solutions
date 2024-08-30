def bowling(score):
    frames = [int(x) for x in score]
    total = 0
    i = 0
    while i < len(frames):
        if frames[i] == 10:  # strike
            total += (
                10
                + (frames[i + 1] if i + 2 < len(frames) else 0)
                + (frames[i + 2] if i + 3 < len(frames) else 0)
            )
            i += 1
        elif frames[i] + frames[i + 1] >= 10:  # spare
            total += 10 + frames[i + 2]
            i += 2
        else:
            total += sum(frames[i : i + 2]) if len(frames[i : i + 2]) > 0 else 0
            i += 2
    return total