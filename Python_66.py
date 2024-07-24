```
def digitSum(n):
    return sum(ord(c) - 48 for c in str(n) if '0' <= c <= '9')