```
def digitSum(s):
    return sum(int(c) for c in ''.join(word) if c.isdigit() for word in s.split())