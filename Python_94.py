def skjkasdkd(lst):
    largest_prime = None
    for num in lst:
        if is_prime(num) and (largest_prime is None or num > largest_prime):
            largest_prime = num
    if largest_prime is not None:
        return sum(map(int, str(largest_prime)))
    else:
        return 0