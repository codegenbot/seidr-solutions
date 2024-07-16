```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll = 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll == 1:
                score += first_roll + second_roll
            else:
                if first_roll < 10:
                    score += first_roll + second_roll
                else:
                    score += 10 + second_roll
            roll = 0
        elif len(frame) > 2:
            strike = int(frame[0])
            next_two_rolls = [int(x) for x in frame[1:]]
            while len(next_two_rolls) > 0:
                if strike == 10:
                    score += 10 + sum(next_two_rolls)
                    break
                elif next_two_rolls[0] < 10:
                    score += strike + sum(next_two_rolls)
                    break
                else:
                    score += strike + next_two_rolls[0]
                    next_two_rolls.pop(0)
            roll = 0
    return score