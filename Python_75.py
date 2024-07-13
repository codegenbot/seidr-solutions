```
def is_multiply_prime(n=None):
    if n is None:
        a = int(input("Enter a number: "))
        b = int(input("Enter another number: "))

        def is_prime(m):
            if m < 2:
                return False
            for i in range(2, int(m**0.5) + 1):
                if m % i == 0:
                    return False
            return True

        product = a * b
        return is_prime(product)
    else:
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                factors = [i]
                j = n // i
                while j > 1 and i <= j:
                    if not is_prime(j):
                        return False
                    i = j
                    j = n // i
                return True
        return True