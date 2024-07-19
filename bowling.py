def bowling_score(frames):
    frames = [frame for frame in frames.split('-') if frame]
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 30
            i += 1
        elif '/' in frames[i]:
            first_roll = int(frames[i].replace('/', )[0])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            i += 1
        else:
            first_roll = int(frames[i][0])
            if len(frames[i]) == 2 and frames[i][1] == 'X':
                second_roll = 10 - first_roll
                score += 10
            elif len(frames[i]) >= 3 and frames[i][1:].isdigit():
                second_roll = int(frames[i][1:])
                score += first_roll + second_roll
        i += 1
    return score