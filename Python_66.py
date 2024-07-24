```
def digitSum(s):
    return sum(int(c) for c in ''.join(filter(str.isdigit, s)) )