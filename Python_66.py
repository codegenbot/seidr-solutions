def digitSum(s):
    total = 0
    for c in s:
        if c.isdigit():
            total += int(c) * (2 if total % 2 != 0 else 1)
    return total