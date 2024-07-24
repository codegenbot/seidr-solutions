def digitSum(s):
    return sum(int(c.lower()) - int("a") + 1 for c in s if c.isalnum() and c.isalpha())