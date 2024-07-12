def digits(n):
    odd_product = 1
    even_sum = 0
    while n:
        digit = n % 10
        if digit % 2 != 0:
            odd_product *= digit
        else:
            even_sum += digit
        n //= 10
    return odd_product * (even_sum + 1)