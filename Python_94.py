
def skjkasdkd(lst):
    # find the largest prime number in the list
    max_prime = None
    for num in lst:
        if is_prime(num) and (max_prime is None or num > max_prime):
            max_prime = num

    # return the sum of its digits
    if max_prime is not None:
        return sum(map(int, str(max_prime)))
    else:
        return 0

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True