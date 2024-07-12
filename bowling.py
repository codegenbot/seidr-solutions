def bowling_score(bowls):
    frames = []
    frame = []
    for bowl in bowls:
        if bowl == "X":
            frame.append(10)
            frames.append(frame)
            frame = []
        elif bowl == "/":
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        else:
            frame.append(int(bowl) if bowl != "-" else 0)
            if len(frame) == 2:
                frames.append(frame)
                frame = []

    score = 0
    for i in range(10):
        frame = frames[i]
        if frame[0] == 10:
            score += 10 + sum(frames[i + 1][:2])
        elif sum(frame) == 10:
            score += 10
            if i + 1 < len(frames):
                score += frames[i + 1][0]
        else:
            score += sum(frame)

    return score
bowls = input()
print(bowling_score(bowls))