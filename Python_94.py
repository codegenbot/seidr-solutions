def skjkasdkd(lst):
    # Find the largest prime number in the list
    max_prime = None
    for num in lst:
        if is_prime(num) and (max_prime is None or num > max_prime):
            max_prime = num

    # Return the sum of its digits
    return sum(int(digit) for digit in str(max_prime))