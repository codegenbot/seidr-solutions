def is_multiply_prime(a):
    for i in range(2, a):
        if a % i == 0:
            for j in range(2, a):
                if a % j == 0 and i != j:
                    for k in range(2, a):
                        if a % k == 0 and i != k and j != k:
                            return True
    return False