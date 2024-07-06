```python
import re

def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            left_pins, right_pins = map(int, re.split('/', frames[i]))
            if left_pins == 0:
                score += 10 + (right_pins if right Pins > 0 else 0)
            elif left Pins + right_pins < 10:
                score += left Pins + right Pins
            else:
                score += 10
        else:
            score += int(frames[i])
    return score