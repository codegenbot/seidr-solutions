def is_multiply_prime(a):
    for i in range(2, a):
        if a % i == 0:
            for j in range(2, int(a/i)+1):
                if (a/i) % j == 0:
                    return True
    return False