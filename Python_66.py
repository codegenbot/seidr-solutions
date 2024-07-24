def digitSum(s):
    if not s:
        return 0
    return sum(int(digit) for digit in str(sum(ord(c) - 64 for c in s if c.isupper())))