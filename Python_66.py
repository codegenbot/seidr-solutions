def digitSum(n):
    n = ''.join(filter(str.isdigit, str(n).lower()))
    return sum(int(digit) for digit in n)