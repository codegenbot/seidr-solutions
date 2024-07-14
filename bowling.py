def bowling_score(frames):
    score = 0
    roll = []
    for i, frame in enumerate(frames.split("/")):
        if frame == "X":
            if len(roll) < 2:
                roll += [10]
            else:
                prev_frame = frames[: i - 1].split("/")
                prev_roll = [int(x) for x in re.findall("\d", prev_frame[-1])]
                score += sum(prev_roll)
        elif frame == "10":
            if len(roll) < 2:
                roll += [10]
            else:
                prev_frame = frames[: i - 1].split("/")
                prev_roll = [int(x) for x in re.findall("\d", prev_frame[-1])]
                score += sum(prev_roll)
        elif frame.isdigit():
            roll += [int(frame)]
        if len(roll) == 2 and i < 9:
            if sum(roll) == 10:
                score += 10
            else:
                score += sum(roll)
            roll = []
    for x in roll:
        score += x
    return score