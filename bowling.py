def bowling_score(frames):
    score = 0
    frame_scores = []
    frames = [int(x) for x in frames.replace('/', '+')]
    for i in range(0, len(frames), 2):
        if i + 1 < len(frames):
            roll1, roll2 = frames[i], frames[i+1]
        else:
            roll1, = frames[i],
        if roll1 + roll2 == 10:
            frame_scores.append(roll1 + roll2)
        elif roll1 == 10:
            frame_scores.append(roll1 + rolls[i+1])
        else:
            frame_scores.append(roll1)
            frame_scores.append(roll2)
    for i, score in enumerate(frame_scores):
        if i < 9 and sum(frame_scores[:i+1]) < 10:
            if frame_scores[i] + frames[i+1] < 11:
                frame_scores[i+1] += frame_scores[i]
        elif i == 9 and sum(frame_scores) < 10:
            if frame_scores[-1] + frames[-1] < 11:
                frame_scores[-1] += frames[-1]
    return sum(frame_scores)