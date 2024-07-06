```
import re

def digitSum(n):
    return sum(int(i) for i in re.sub(r'\D', '', str(n)))