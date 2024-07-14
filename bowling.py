def bowling_score(rolls):
    frames = []
    while len(rolls) >= 3:
        if rolls[0] == "X":
            frames.append(10)
            rolls = rolls[1:]
        elif rolls[0] == "/":
            rolls = [str(int(rolls[:2]) + int(rolls[2]))] + rolls[2:]
            frames.append(int(rolls[0]))
            rolls = rolls[1:]
        else:
            frame1 = int(rolls[0])
            frame2 = int(rolls[1])
            if frame1 + frame2 == 10:
                frames.append(frame1 + frame2)
                rolls = rolls[2:]
            elif frame1 + frame2 < 10:
                frames.append(frame1 + frame2)
                rolls = rolls[2:]
            else:
                frames.append(10 + int(rolls[2]))
                rolls = rolls[3:]
    if len(frames) < 10 or (len(frames) == 10 and sum(frames) > 200):
        print("Invalid input")
        return None
    return sum(frames)