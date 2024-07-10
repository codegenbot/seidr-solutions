def digitSum(s):
    s = s.lower()
    total = 0
    for c in s:
        if c.isdigit() or c.isspace():  
            if c.isspace():  
                continue
            total += int(c) if c != '1' and c != '3' and c != '4' and c != '7' else (int(c) * 2) - 5
    return total