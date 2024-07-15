def is_multiply_prime(a):
    for i in range(2, int(a/2)+1):
        if a % i == 0:
            for j in range(2, int(i/2)+1):
                if i % j == 0:
                    return False
    return True