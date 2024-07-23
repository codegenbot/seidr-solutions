def digitSum(s):
    return sum(ord(c) - 64 if c.isupper() else 0 for c in s)