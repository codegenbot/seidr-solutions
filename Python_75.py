def is_even(num):
    return num % 2 == 0


def is_multiply_prime(a):
    for i in range(2, int(a**0.5) + 1):
        if a % i == 0 and (i == 2 or not is_even(i)):
            return True
    return False