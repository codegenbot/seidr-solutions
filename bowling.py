def bowling_score(frames):
    score = 0
    frame_count = 1
    for char in frames:
        if char.isdigit():
            if len(char) == 1 and int(char) > 9:
                raise ValueError("Invalid input")
            score += int(char)
            frame_count += 1
        elif char == "/":
            score += 10 - (10 - int(frames[frames.index(char) - 1]))
            frame_count += 1
        else:
            if frame_count < 10:
                strike = True
                while strike:
                    score += 10 + np.sum(
                        [
                            10,
                            int(
                                frames[frames.index("/") : frames.index("/", 2)].split(
                                    "/"
                                )[0]
                            ),
                            int(
                                frames[frames.index("/") : frames.index("/", 3)].split(
                                    "/"
                                )[1]
                            ),
                        ]
                    )
                    strike = False
            else:
                raise ValueError("Invalid input")
    return score