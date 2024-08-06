def bowling_game(score):
    score = [0] * 10
    frames = list(map(int, re.sub("[X/-]", "0", score).split("/")))
    for i in range(0, len(frames), 2):
        if frames[i : i + 2].count("0") == 1:
            score[int(i / 2)] = frames[i] + frames[(i + 1) % 2]
        else:
            score[int(i / 2)] = sum(frames[i : i + 2])
    return sum(score)