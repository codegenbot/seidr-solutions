def digitSum(s):
    return sum(ord(c) - ord('A') + 10 for c in s if c >= 'A' and c <= 'Z')