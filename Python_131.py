def digits(n):
    count_odd = 0
    product = 1
    while n > 0:
        digit = n % 10
        if digit % 2 != 0:
            product *= digit
            count_odd += 1
        n //= 10
    return product if count_odd > 0 else 0