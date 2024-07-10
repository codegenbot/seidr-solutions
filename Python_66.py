```
def digitSum(s):
    return sum(int(digit) for digit in ''.join(c if c.isdigit() else '' for c in s.lower()).replace(" ", ""))