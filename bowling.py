def calculate_bowling_score(rolls):
    frames = []
    frame = []
    for roll in rolls:
        if roll == "X":
            frame.append(10)
            frames.append(frame)
            frame = []
        elif roll == "/":
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        else:
            frame.append(int(roll) if roll != "-" else 0)
            if len(frame) == 2 or "X" in frame:
                frames.append(frame)
                frame = []
    if len(frame) == 1:  # Last frame is incomplete
        frames.append(frame + [0])

    total_score = 0
    for i in range(10):
        frame = frames[i]
        total_score += sum(frame)
        if frame[0] == 10:  # strike
            if i < 9:
                next_frame = frames[i + 1]
                if len(next_frame) == 1:  # next frame is also a strike
                    next_next_frame = frames[i + 2]
                    total_score += next_frame[0] + next_next_frame[0]
                else:
                    total_score += sum(next_frame)
            elif i == 9:
                total_score += sum(
                    frames[9][1:]
                )  # add the last two rolls of the last frame
        elif sum(frame) == 10:  # spare
            total_score += frames[i + 1][0]

    return total_score


# Read input from user
rolls = input()
print(calculate_bowling_score(rolls))