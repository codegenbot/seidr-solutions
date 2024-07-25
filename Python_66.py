```
def digitSum(s):
    s = ''.join(c if c.isalnum() else '' for c in s)
    return sum(int(c) for c in s)

print(digitSum("You arE Very Smart"))