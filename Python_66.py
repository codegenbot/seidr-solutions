def digitSum(s):
    total = 0
    for c in s.lower():
        total += ord(c) - 48 if '0' <= c <= '9' else 0
    return total