def digitSum(s):
    return sum(int(c) for c in s.lower() if c.isdigit()) if any(c.isdigit() for c in s.lower()) else 0