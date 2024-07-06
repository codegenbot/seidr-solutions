def digits(n):
    if n == 0:
        return 0
    result = 1
    for digit in str(n):
        if int(digit) % 2 != 0:
            result *= int(digit)
    return result