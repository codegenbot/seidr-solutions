```
def digitSum(s):
    return sum(int(c) for c in s if c.isdigit() or c.isspace())

print(digitSum("You arE Very Smart"))