def digitSum(s):
    return sum(int(d) for d in str(sum(ord(c) - 64 for c in s if c.isupper())))