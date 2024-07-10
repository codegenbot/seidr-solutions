```
def digitSum(n):
    return sum(int(digit) for digit in str(n) if digit.isdigit())