def digitSum(s):
    return sum(int(c.lower()) - 9 if c.lower() >= 'a' and c.lower() <= 'z' else int(c) for c in s)