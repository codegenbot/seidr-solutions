def digitSum(s):
    return sum(ord(c.lower()) - 96 if c.isalnum() else 0 for c in s)