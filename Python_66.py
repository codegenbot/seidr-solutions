```
def digitSum(s):
    return int(''.join(c for c in s if c.isdigit()))

print(digitSum("You arE Very Smart"))