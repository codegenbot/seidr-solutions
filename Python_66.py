```
def digitSum(s):
    return sum(ord(c.lower()) - 96 for c in s)