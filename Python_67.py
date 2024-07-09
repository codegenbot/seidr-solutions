```
import re
def fruit_distribution(s, n):
    s = s.lower()
    num_apples = sum(int(i) for i in re.findall('\d+', s))
    return n - num_apples