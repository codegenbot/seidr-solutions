def skjkasdkd(lst):
    # Find the largest prime number in the list
    max_prime = None
    for num in lst:
        if is_prime(num) and (max_prime is None or num > max_prime):
            max_prime = num

    # If no prime numbers were found, return 0
    if max_prime is None:
        return 0

    # Return the sum of the digits of the largest prime number
    return sum(int(digit) for digit in str(max_prime))