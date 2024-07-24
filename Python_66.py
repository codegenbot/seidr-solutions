def digitSum(s):
    return sum(int(c) if c.isdigit() else ord(c) - 64 if 'A' <= c <= 'Z' else ord(c) for c in s)