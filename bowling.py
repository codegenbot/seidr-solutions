```
def bowling_score(rolls):
    score = 0
    roll_idx = 0
    for frame in range(1, 11):
        if len(rolls) > roll_idx and rolls[roll_idx] == 'X':
            score += 10 + (10 - (frame == 10))
            roll_idx += 1
        elif len(rolls) > roll_idx and rolls[roll_idx].isdigit():
            num_rolls = int(rolls[roll_idx])
            if num_rolls == 2:
                score += 2 * (10 - (frame == 10))
                roll_idx += 1
            else:
                score += num_rolls + (10 - (frame == 10))
                roll_idx += num_rolls
        elif len(rolls) > roll_idx and '/' in rolls[roll_idx]:
            first, second = map(int, rolls[roll_idx].split('/'))
            score += first + second + (10 - (frame == 10))
            roll_idx += 1
    return score