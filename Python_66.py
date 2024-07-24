def digitSum(n):
    n = ''.join(filter(str.isdigit, str(n).lower().replace(" ", "").replace(",", "").replace(".", "")))
    return sum(int(digit) for digit in n)