```
def digitSum(s):
    n = int(s)
    return sum(int(digit) for digit in str(n))