```
def digitSum(s):
    return sum(int(c) for c in s if c.isdigit())

print(digitSum("You are Very Smart"))