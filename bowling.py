def bowling_score(game):
    score = 0
    frames = game.split('/')
    for i, frame in enumerate(frames):
        if 'X' in frame.upper():
            if len(frame) == 1:
                score += 10
            else:
                first_roll = int(frame[0])
                score += first_roll + int(frames[i+1].split()[0]) + int(frames[i+2].split()[0])
        elif '/' in frame and len(frame) > 2:
            first_two_rolls = list(map(int, frame.split()))
            if sum(first_two_rolls) == 10:
                score += sum(first_two_rolls)
                try:
                    next_roll = int(frames[i+1].split()[0])
                    score += next_roll
                except IndexError:
                    pass
            else:
                score += sum(first_two_rolls)
        elif len(frame) == 2:
            first_two_rolls = list(map(int, frame.split()))
            score += sum(first_two_rolls)
        else:
            score += int(frame)

    return score