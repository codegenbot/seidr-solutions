def digitSum(s):
    return sum(int(c) if c.isdigit() else ord(c.upper()) - ord('A') + 10 if 'A' <= c.upper() <= 'Z' else 0 for c in s)