def bowling_score(frames):
    score = 0
    frames = [
        (
            int(x)
            if x.isdigit()
            else (
                10
                if x == "X"
                else int(x.replace("/", sum(map(int, frames[i + 1 : i + 3]))))
            )
        )
        for i, x in enumerate(frames)
    ]
    return sum(frames)