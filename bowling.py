def bowling(score):
    frames = []
    frame_scores = []
    i = 0
    while i < len(score):
        if score[i] == 'X':
            frames.append(10)
            i += 1
        else:
            frames.append(int(score[i]))
            i += 1
            if score[i] == '/':
                frames[-1] = 10 - frames[-1]
                i += 1
    for i in range(10):
        if frames[i] < 10:
            frame_scores.append(frames[i])
        else:
            frame_scores.append(frames[i] + frames[i+1] + frames[i+2])
    return sum(frame_scores)