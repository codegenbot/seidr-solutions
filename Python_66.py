```
def digitSum(s):
    return sum(int(digit) for num in s.split() for digit in str(num))