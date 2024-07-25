```python
import re

def digitSum(s):
    total = 0
    for match in re.finditer(r'\d+', s):
        total += int(match.group())
    return total

print(digitSum("You arE Very Smart"))