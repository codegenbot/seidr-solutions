```
def digitSum(s):
    return sum(ord(c.lower()) - 96 if c.isalpha() else 0 if not c.isdigit() else int(c) for c in s)