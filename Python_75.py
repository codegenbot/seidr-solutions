def is_multiply_prime(a):
    for i in range(2, a):
        if a % i == 0:
            if all(i % j != 0 for j in range(2, i)):
                for k in range(i + 1, a):
                    if (a / i) % k == 0:
                        if all(k % m != 0 for m in range(2, k)):
                            if all((a / i) % n != 0 for n in range(k + 1, a)):
                                return True
    return False