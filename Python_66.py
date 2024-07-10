def sum_of_digits(n):
    str_n = str(n)
    return sum(int(digit) for digit in str_n)