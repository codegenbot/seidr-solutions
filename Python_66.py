def digitSum(s):
    return sum([ord(c) for c in s if ord("A") <= ord(c) <= ord("Z")])