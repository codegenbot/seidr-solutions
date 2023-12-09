def is_multiply_prime(a):
    for i in range(1, a+1):
        if (i % 2 == 0) and (i % 3 == 0) and (i % 5 == 0):
            return True
    return False