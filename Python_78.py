def hex_key(num):
    primes = set([2, 3, 5, 7, ord("B"), ord("D")])
    return sum(
        1 for c in num if ord(c) >= ord("0") and ord(c) <= ord("9") or ord(c) in primes
    )