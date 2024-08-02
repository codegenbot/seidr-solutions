def calculate_sum_of_digits(n):
    sum = 0
    while n:
        sum += n % 10
        n //= 10
    return sum