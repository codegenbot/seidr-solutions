def digitSum(n):
    return sum(int(digit) for digit in str(n))
digitSum = digitSum(123)
check(digitSum)