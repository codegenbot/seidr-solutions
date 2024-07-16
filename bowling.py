def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else 'x' if x == 'X' else -1 for x in frames.replace('/', '')]
    i = 0
    while i < len(frames):
        if frames[i] == 'x':
            if i + 2 < len(frames):
                score += 10 + frames[i+1] * 2
                i += 3
            else:
                score += 10
                i += 1
        elif frames[i] == -1:
            first_roll = frames[i + 1]
            if i + 3 < len(frames) and frames[i+2] == 'x':
                second_roll = 10
                i += 4
            else:
                second_roll = frames[i+2]
                i += 3
            score += first_roll + second_roll
        else:
            score += sum(frames[i:i+3])
            i += 3
    return score