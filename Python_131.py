def digits(n):
    result = 1
    for digit in str(n):
        if int(digit) % 2 != 0:
            result *= int(digit)
    if n % 2 == 0:
        return 0
    return result