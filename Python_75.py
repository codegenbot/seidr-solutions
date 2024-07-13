def is_multiply_prime(*args):
    def is_prime(m):
        if m < 2:
            return False
        for i in range(2, int(m**0.5) + 1):
            if m % i == 0:
                return False
        return True

    product = 1
    for num in args:
        product *= num

    return is_prime(product)