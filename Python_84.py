```'
def solve(N):
    binary = str(bin(N))[2:]
    sum_of_digits = sum(int(digit) for digit in str(N))
    decimal_sum = bin(sum_of_digits)[2:]
    return binary + decimal_sum'