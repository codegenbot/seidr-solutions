def digitSum(s):
    sum = 0
    for c in s:
        if c.isdigit():
            sum += int(c)
    return sum