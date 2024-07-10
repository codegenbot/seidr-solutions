def digitSum(s):
    total = 0
    for c in s.lower():
        total += int(c) if c.isdigit() else 0
    return total