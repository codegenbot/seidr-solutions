Here is the completed code:

def digitSum(s):
    return sum(ord(c) for c in s if c.isupper())