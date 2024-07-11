def digitSum(s):
    return sum((ord(c.upper()) - ord("A") + 10) if c.isalpha() else 0 for c in s)