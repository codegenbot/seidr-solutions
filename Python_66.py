```
import re
def digitSum(n):
    return sum(int(i) for i in re.sub('[^0-9]', '', str(n)))