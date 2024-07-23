```
def digitSum(s):
    return sum(ord(c.upper()) - 55 for c in s if c.isupper())