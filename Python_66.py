```
def digitSum(s):
    return sum(int(c) for c in s if c.isdigit()) + sum(1 for c in s[::2] if c != " ")