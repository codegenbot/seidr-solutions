```
def digitSum(s):
    return sum(int(c) if c.isdigit() else 1 for c in s)