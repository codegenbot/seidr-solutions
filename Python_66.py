```
def digitSum(s):
    return sum(int(c)*10**(s.lower().index(c)//1) for c in s if c.isdigit())