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
                if first_roll + second_roll >= 10:
                    score += 10
                else:
                    score += first_roll + second_roll
            else:
                score += max(first_roll, second_roll) + min(first_roll, second_roll)
            roll = 0
        elif len(frame) > 2:
            strike_frames = int(frame[0])
            while strike_frames > 0:
                score += int(input(f"Enter the {strike_frames}st frame after strike: "))
                strike_frames -= 1
    return score