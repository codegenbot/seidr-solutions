def digitSum(s):
    s = s.lower()
    total = 0
    for c in s:
        if c.isdigit() or c.isspace():  
            if c.isspace():  
                continue
            if (total % 2) == 0:
                total += int(c)
            else:
                total += int(c) * 2 - 5 if int(c) > 4 else int(c) * 2
    return total