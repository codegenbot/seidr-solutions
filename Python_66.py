```Python
def digitSum(s):
    s = s.lower()
    return sum(int(c) if c.isdigit() else (1 if c in 'aeiouy' else 0) for c in s)

print(digitSum("You arE Very Smart"))