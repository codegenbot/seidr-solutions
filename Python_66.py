def digitSum(s):
    total = 0
    for c in s:  
        if c.isdigit():
            if (ord(c) - ord('0')) % 2 == 0:
                total += int(c)
            else:
                total += int(c) * 2 - 5 if int(c) > 4 else int(c) * 2
        else:
            pass  
    return total