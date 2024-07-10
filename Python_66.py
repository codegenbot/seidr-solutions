def digitSum(s):
    return sum(int(c) for c in set(s.lower()) if c.isdigit())