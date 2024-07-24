def digitSum(s):
    return sum(int(c) if c.isdigit() else ord(c.lower()) - 96 if c.isalpha() else ord(c) for c in s).sum((ord(i.upper())-64 for i in str(sum)))