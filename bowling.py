Here is the Python solution for the bowling problem:

```python
def bowling_score(bowling_game):
    score = 0
    roll = 0
    frame = 1
    for char in bowling_game:
        if char.isdigit():
            if len(char) > 1:
                if int(char) == 10:
                    score += 10 + (9 - frame) * 2
                    frame += 1
                    continue
                score += int(char) + (9 - frame) * 2
                roll = int(char)
                frame += 1
            else:
                if roll < 10:
                    score += min(int(char), 10 - roll) + (9 - frame) * 2
                    roll += min(int(char), 10 - roll)
                    frame += 1
                else:
                    score += int(char) + (9 - frame) * 2
                    frame += 1
        elif char == 'X':
            if roll < 10:
                score += 10 + (9 - frame) * 2
                roll = 10
                frame += 1
            else:
                score += 10 + (9 - frame) * 2
                frame += 1
        elif char == '/':
            continue
    return score