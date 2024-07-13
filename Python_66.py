```
import itertools

def digitSum(s):
    return sum(int(''.join(group)) for key, group in itertools.groupby(sorted(s.lower()), str.isdigit)) or 0