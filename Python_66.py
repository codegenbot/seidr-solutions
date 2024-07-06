def digitSum(s):
    return sum([ord(c) for c in s if ord(c) >= 65 and ord(c) <= 90])