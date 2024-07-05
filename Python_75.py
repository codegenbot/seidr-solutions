def is_multiply_prime(a):
    for i in range(2, int(a**0.5) + 1):
        if a % i == 0 and (i == 2 or is_odd(i)) and is_even(a // i):
            return True
    return False