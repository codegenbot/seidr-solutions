def bowling_game(frames):
    score = 0
    frame = 1
    while frames and frame <= 10:
        if frames[0] == "X":
            score += 30
            frames = frames[1:]
            frame += 1
        elif "/" in frames[:2]:
            left, right = frames[:2].split("/")
            score += int(left) + int(right)
            frames = frames[2:]
            if len(frames) >= 3 and frames[:3] == "X" * 3:
                score += 30
                frames = frames[3:]
            else:
                frame += 1
        else:
            score += int(frames[0])
            frames = frames[1:]
    return score