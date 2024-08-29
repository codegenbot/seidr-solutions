def bowling_score(score):
    score = score.replace("/0", "/")
    frames = [
        list(map(int, frame.split("/"))) if "/" in frame else list(map(int, frame))
        for frame in score.split()
    ]
    return sum(
        (
            sum(frames[i : i + 2])
            if i < 9 and len(frames[i : i + 2]) == 2
            else max(frames[i:]) if i < 9 else frames[-1][0] or 10
        )
        for i in range(len(frames))
    )