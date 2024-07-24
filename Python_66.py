def digitSum(s):
    return sum(int(c.lower()) - ord('a') + 1 for c in s if c.isalpha())