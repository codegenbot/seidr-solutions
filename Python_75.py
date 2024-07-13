def is_multiply_prime(n):
    def is_prime(m):
        if m < 2:
            return False
        for i in range(2, int(m**0.5) + 1):
            if m % i == 0:
                return False
        return True

    a = int(input("Enter the first number: "))
    b = int(input("Enter another number: "))

    return is_prime(a * n)