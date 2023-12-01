def calculate_score(bowling_string):
    frames = []
    frame = []
    for char in bowling_string:
        if char == 'X':
            frame.append(10)
            frames.append(frame)
            frame = []
        elif char == '/':
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        elif char == '-':
            frame.append(0)
        else:
            frame.append(int(char))

        if len(frame) == 2 or char == 'X':
            frames.append(frame)
            frame = []

    score = 0
    for i in range(10):
        frame = frames[i]
        score += sum(frame)
        if i < 9:
            if frame[0] == 10:
                if frames[i+1][0] == 10:
                    score += frames[i+1][0] + frames[i+2][0]
                else:
                    score += sum(frames[i+1])
            elif sum(frame) == 10:
                score += frames[i+1][0]

    return score