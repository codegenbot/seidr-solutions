def digitSum(s):
    s = str(s)  
    return sum(int(c) for c in s if c.isdigit())