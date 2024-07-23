```
def digitSum(s):
    return sum(int(c.upper()) if c.isalpha() else 0 for c in s)