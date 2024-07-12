def digitSum(s):
    return sum(int(c.upper()) - 55 if c.isupper() else int(c) for c in s)