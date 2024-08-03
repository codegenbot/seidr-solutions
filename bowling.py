def bowling_score(rolls):
    frames = []
    roll_index = 0
    for frame in range(1, 11):
        if len(rolls[roll_index:].split("/")) >= (10 - frame + 1):
            rolls_to_add = rolls[roll_index:].split("/")[:2]
        else:
            rolls_to_add = rolls[roll_index:].split("/")
            roll_index += len(rolls_to_add) - 1
        if len(rolls_to_add) == 1:
            frames.append([int(rolls_to_add[0])])
        elif len(rolls_to_add) == 2:
            if int(rolls_to_add[0]) + int(rolls_to_add[1]) == 10:
                frames.append([int(rolls_to_add[0]), int(rolls_to_add[1])])
            else:
                frames.append([int(rolls_to_add[0]), 10 - int(rolls_to_add[0])])
        roll_index += len(rolls_to_add)
    score = sum(
        (
            sum(frame)
            if len(frame) == 2
            else frame[0]
            + (10 if len(frames) < 10 and frames[-1][0] == 10 else frame[1])
        )
        for frame in frames
    )
    return score