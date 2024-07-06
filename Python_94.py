def skjkasdkd(lst):
    largest_prime = max(filter(lambda x: is_prime(x), lst))
    return sum(map(int, str(largest_prime)))

def is_prime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))