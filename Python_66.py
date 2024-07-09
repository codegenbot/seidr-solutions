def digitSum(s):
    return sum(int(d) for d in str(sum(ord(c) - 55 for c in s)) if d.isdigit())