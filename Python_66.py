def digitSum(s):
    s = s.lower()
    total = 0
    i = 1
    for c in s:
        if c.isdigit():
            num = int(c)
            if i % 2 == 0:
                total += num
            else:
                total += 2 * num - 5 if num > 4 else 2 * num
            i += 1
        else:
            continue
    return total