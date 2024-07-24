def digitSum(s):
    return sum(int(c.upper()) for c in s if c.isalpha())