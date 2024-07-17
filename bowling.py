Here is the Python solution for the given problem:

def bowling_score(frames):
    score = 0
    frame_count = 0
    last_roll = None
    last_two_rolls = [None, None]

    for roll in frames:
        if roll == '/':
            if last_roll == 'X':
                return -1
            score += 10
        elif roll.isdigit():
            if len(roll) > 1:
                first, second = map(int, roll)
                if first + second >= 10:
                    score += 10
                else:
                    score += first + second
            else:
                score += int(roll)

        frame_count += 1
        last_two_rolls.pop(0)
        last_two_rolls.append(last_roll or '0')
        last_roll = roll

    return score