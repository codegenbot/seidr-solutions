def digitSum(s):
    s = s.lower() 
    return sum(int(i) for i in s if i.isdigit())