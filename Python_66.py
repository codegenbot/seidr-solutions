def digitSum(s):
    return sum(int(c) if c.isdigit() else 0 for c in s)