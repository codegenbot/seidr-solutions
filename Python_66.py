def digitSum(s):
    return sum(int(c.upper().ord() - ord('A') + 1) if c.isalpha() else int(c) for c in s)