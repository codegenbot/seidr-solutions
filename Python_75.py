def get_inputs():
    a = int(input("Enter a number: "))
    b = int(input("Enter another number: "))
    return a * b


def is_multiply_prime(n=None):
    if n is None:
        product = get_inputs()
    else:
        product = n

    def is_prime(m):
        if m < 2:
            return False
        for i in range(2, int(m**0.5) + 1):
            if m % i == 0:
                return False
        return True

    return is_prime(product)