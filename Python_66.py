def digitSum(s):
    return sum(int(c) for c in s if "A" <= c <= "Z") - 64