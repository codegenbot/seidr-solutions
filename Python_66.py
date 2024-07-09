```
def digitSum(s):
    return sum(int(c) if c.isupper() else 0 for c in s)