def calculate_sum_of_digits(n):
    sum = 0
    while n:
        digit = n % 10
        sum += digit
        n //= 10
    return sum