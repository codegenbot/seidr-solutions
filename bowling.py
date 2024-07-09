def bowling_score(frames):
    score = 0
    frames = frames.replace('-', '')
    for i in range(0, len(frames), 2):
        frame = frames[i:i+2]
        if frame == 'X':
            score += 10
            if i < len(frames) - 1 and frames[i+2] != '/':
                score += int(frames[i+2])
        elif '/' in frame:
            first_roll, second_roll = map(int, frame[:-1].split('/'))
            score += first_roll + second_roll
            if second_roll == 0:  # spare
                score += 10 - second_roll
        else:
            score += int(frame[0]) + int(frame[1])
    return score