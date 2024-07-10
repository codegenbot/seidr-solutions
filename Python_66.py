def digitSum(s):
    return sum(ord(c.upper()) - 55 if c.isalpha() else int(c) for c in s)