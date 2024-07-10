def digitSum(s):
    digit_total = 0
    for c in s:
        if c.isdigit():
            digit_total += int(c)
    total = 0
    for i, c in enumerate(str(digit_total)):
        if c.isdigit():
            if (i % 2) == 0:
                total += int(c)
            else:
                total += int(c) * 2 - 5 if int(c) > 4 else int(c) * 2
    return total