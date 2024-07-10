def digitSum(s):
    total = 0
    for c in s:
        if c.isdigit():
            if (int(c) > 4):
                total += int(c) * 2 - 5
            else:
                total += int(c) * 2
    return total