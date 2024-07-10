def digitSum(s):
    total = 0
    for c in s:
        if c.isdigit():
            if (total % 2) == 0:
                total += int(c)
            else:
                total += int(c) * 2 - 5 if int(c) > 4 else int(c) * 2
        else:
            continue
    return total