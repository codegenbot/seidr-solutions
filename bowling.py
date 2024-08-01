def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1:
            score += 10 + 10 * (i > 0)
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll + 10 * (i > 0)
        elif len(frame) > 2:
            first_two_rolls = list(map(int, frame[:2]))
            remaining_rolls = list(map(int, frame[2:]))
            if sum(first_two_rolls) == 10:
                score += sum(first_two_rolls) + sum(remaining_rolls)
            else:
                score += sum(first_two_rolls) + 10 + 10 * (i > 0)
    return score