def digitSum(s): 
    return sum(ord(c) - 55 if 'N' <= c <= 'Z' else ord(c) - 64 for c in s)