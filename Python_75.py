```
def is_multiply_prime(n=None):
    if n is None:
        a = int(input("Enter a number: "))
        b = int(input("Enter another number: "))

        product = a * b
        return is_prime(product)
    else:
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0 and not is_prime(i):
                return False
        return is_prime(n)

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True