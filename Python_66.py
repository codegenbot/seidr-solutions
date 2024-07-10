```
def digitSum(s):
    return sum(ord(c) - 55 if c.isalpha() and c.isupper() else 0 for c in s)