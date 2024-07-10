def digitSum(s):
    total = 0
    for c in s:
        if c.isdigit():
            if (total % 2) == 0:
                total += int(c)
            else:
                total += ord(c)
        else:
            total += ord(c)
    return total