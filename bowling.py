def bowling_game(frames):
    score = 0
    roll = []
    for frame in frames:
        if frame == "/":
            score += roll[0] + roll[1]
            roll = []
        elif "X" in frame:
            score += 10 + 10 - int(frame.replace("X", "5"))
            roll = []
        else:
            roll.append(int(frame))
    return score