def calculate_score(bowls):
    score = 0
    frames = []
    frame = []

    for bowl in bowls:
        if bowl == 'X':
            frame.append(10)
            frames.append(frame)
            frame = []
        elif bowl == '/':
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        elif bowl == '-':
            frame.append(0)
        else:
            frame.append(int(bowl))

        if len(frame) == 2 or bowl == 'X':
            frames.append(frame)
            frame = []

    for i in range(10):
        frame = frames[i]
        score += sum(frame)

        if frame[0] == 10 and i < 9:
            next_frame = frames[i+1]
            if next_frame[0] == 10:
                score += next_frame[0] + frames[i+2][0]
            else:
                score += sum(next_frame)

        if sum(frame) == 10 and i < 9:
            next_frame = frames[i+1]
            score += next_frame[0]

    return score

bowls = input()
print(calculate_score(bowls))