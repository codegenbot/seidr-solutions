```
def digitSum(s):
    return sum(int(c) for c in ' '.join(s.split()) if c.isdigit())