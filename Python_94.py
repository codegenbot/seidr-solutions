def skjkasdkd(lst):
    # Find the largest prime number in the list
    max_prime = None
    for num in lst:
        if is_prime(num) and (max_prime is None or num > max_prime):
            max_prime = num

    # If a prime number was found, return the sum of its digits
    if max_prime is not None:
        return sum(int(digit) for digit in str(max_prime))
    else:
        return 0