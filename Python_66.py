```
def digitSum(s):
    return sum(int(ord(c)-55) for c in s if 'A' <= c <= 'Z')