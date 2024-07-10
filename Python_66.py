```
def digitSum(s):
    return sum(int(digit) for digit in ''.join(c for c in s.lower() if c.isdigit()))