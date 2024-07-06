def skjkasdkd(lst):
    max_prime = None
    for num in lst:
        if is_prime(num) and (max_prime is None or num > max_prime):
            max_prime = num
    return sum(map(int, str(max_prime)))