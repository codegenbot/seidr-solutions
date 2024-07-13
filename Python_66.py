```
def digitSum(s):
    return sum(int(c) for c in s if c.isdigit() and c in '0123456789')