def skjkasdkd(lst):
    from math import sqrt
    max_prime = -1
    for i in range(2, int(sqrt(max(lst))) + 1):
        if all(not (x % i) for x in lst):
            max_prime = i
    return sum(map(int, str(max_prime)))