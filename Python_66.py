def digitSum(s):
    return sum(ord(c) - 64 if c.isupper() else ord(c.lower()) - 96 for c in s)