def digitSum(s):
    s = s.lower()
    total = 0
    is_odd = False
    for c in s:
        if c.isdigit():
            d = int(c)
            total += (d * 2) if is_odd else d
            is_odd = not is_odd
    return total