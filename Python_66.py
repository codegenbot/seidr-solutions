```
import re

def digitSum(n):
    return sum(int(digit) for digit in re.findall('\d', str(n)))