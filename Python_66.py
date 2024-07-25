def digitSum(s):
    s = s.lower()
    return sum(int(c) if c.isdigit() else 3 if c in 'aeilom' else 0 for c in s)

print(digitSum("You arE Very Smart"))