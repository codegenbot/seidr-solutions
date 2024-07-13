```
import re

def digitSum(s):
    return sum(int(c) for c in re.sub('[^0-9]', '', s.lower()))