def digitSum(s):
    return sum(int(c) if c.isdigit() else ord(c) - 64 if 'A' <= c <= 'Z' else 0 for c in s)