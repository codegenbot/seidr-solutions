def is_multiply_prime():
    a = int(input("Enter a number: "))
    b = int(input("Enter another number: "))

    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    return is_prime(a * b)