def skjkasdkd(lst):
    # find the largest prime number in the list
    max_prime = None
    for i in lst:
        if is_prime(i) and (max_prime is None or i > max_prime):
            max_prime = i

    # return the sum of its digits
    if max_prime is not None:
        return sum(int(digit) for digit in str(max_prime))
    else:
        return 0