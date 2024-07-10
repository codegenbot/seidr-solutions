def digitSum(n):
    return sum(int(digit) for digit in filter(str.isdigit, str(n)))