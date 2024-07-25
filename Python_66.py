```
def digitSum(s):
    s = s.lower()
    return sum(int(c) for c in s if c.isdigit())

print(digitSum("You arE Very Smart"))