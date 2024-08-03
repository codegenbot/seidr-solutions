def bowling_score(input_str):
    score = 0
    frames = [int(x) for x in re.sub("/", "-", input_str)]

    for i in range(10):
        if frames[i] == 10:
            score += 10 + (frames[i + 1] if i < 9 else 0)
        elif frames[i : i + 2].count("X"):
            score += 10 + (frames[i + 2] if i < 8 else 0)
        elif sum(frames[i : i + 2]) == 10:
            score += sum(frames[i : i + 2])
        else:
            score += frames[i]

    return score