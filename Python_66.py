def digitSum(s):
    total = 0
    for c in s.lower():
        if c.isdigit():
            total += int(c)
    return total