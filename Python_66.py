```
def digitSum(s):
    return sum(ord(c) - 55 if c.isalpha() else ord(c) - 48 for c in s)