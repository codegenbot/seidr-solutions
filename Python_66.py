def digitSum(s):
    if not s:
        return 0
    return sum(int(c) for c in str(s) if c.isdigit())