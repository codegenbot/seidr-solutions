Here is the Python solution for the bowling problem:

```
def bowling_score(gutter):
    score = 0
    roll = 0
    prev_rolls = [0, 0]
    for char in gutter:
        if char.isdigit():
            if len(prev_rolls) < 2:
                prev_rolls.append(int(char))
            else:
                if len(prev_rolls) == 2 and (prev_rolls[0] + prev_rolls[1]) == 10:
                    score += 10
                elif roll >= 1:
                    score += min(prev_rolls[0], prev_rolls[1]) * 2
                else:
                    score += sum(prev_rolls)
                prev_rolls = [int(char)]
        else:
            if char == 'X':
                score += 10
                prev_rolls = [10]
            elif char == '-':
                score += sum(prev_rolls)
                prev_rolls = [0, 0]
            else:
                prev_rolls[roll % 2] = int(char)
        roll += 1
    if len(prev_rolls) > 0:
        if len(prev_rolls) < 2:
            score += sum(prev_rolls)
        elif sum(prev_rolls) == 10:
            score += 10
        else:
            score += min(prev_rolls[0], prev_rolls[1]) * 2
    return score