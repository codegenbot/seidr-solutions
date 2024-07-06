def skjkasdkd(lst):
    # Find the largest prime number in the list
    max_prime = None
    for num in lst:
        if is_prime(num) and (max_prime is None or num > max_prime):
            max_prime = num

    # If no prime numbers were found, return 0
    if max_prime is None:
        return 0

    # Sum the digits of the largest prime number
    sum_digits = 0
    while max_prime > 0:
        sum_digits += max_prime % 10
        max_prime //= 10

    return sum_digits