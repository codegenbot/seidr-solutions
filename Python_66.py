```
def digitSum(s):
    return sum(ord(c.upper()) - ord('A') + 1 if c.isalpha() else 0 for c in s)