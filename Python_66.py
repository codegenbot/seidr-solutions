```
def digitSum(s):
    return sum(int(c) for c in s.lower() if c.isdigit()) or 0