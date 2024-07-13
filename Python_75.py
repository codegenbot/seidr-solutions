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
        return is_prime(a) and is_prime(b)
    else:
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                root_i = int(i**0.5)
                for j in range(root_i+1):
                    if (j * i - n) // abs(j * i - n) == 0 and is_multiply_prime(abs(n//i)):
                        return True
        return False