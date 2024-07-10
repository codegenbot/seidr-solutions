def digitSum(s):
    return sum(int(c.lower()) - 96 if c.isalpha() else 0 for c in s)