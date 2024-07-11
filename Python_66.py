def digitSum(s):
    return sum(ord(c) for c in s if 'A' <= c <= 'Z')