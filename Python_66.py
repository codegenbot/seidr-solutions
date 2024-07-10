def digitSum(s):
    total = 0
    for i, c in enumerate(s):
        if c.isdigit():
            if (i % 2) == 0:
                total += int(c)
            else:
                total += int(c) * 2 - 5 if int(c) > 4 else int(c) * 2
    return total