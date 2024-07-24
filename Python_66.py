def digitSum(s):
    return sum(int(c) if c.isdigit() else ord(c.lower()) - 96 for c in s)