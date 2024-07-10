def digits(n):
    count_odd = 0
    product = 1
    for digit in str(n):
        if int(digit) % 2 != 0:
            if count_odd > 0:
                return 0
            product *= int(digit)
            count_odd += 1
    return product