def digitSum(n):
    s = str(n)
    total_sum = sum(int(digit) for digit in s if digit.isdigit())
    return total_sum