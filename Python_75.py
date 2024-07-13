```
def is_multiply_prime(n=None):
    if n is None:
        a = int(input("Enter a number: "))
        b = int(input("Enter another number: "))

        product = a * b
        return is_prime(product)
    else:
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                factors = [i]
                j = n // i
                while j > 1 and i <= j:
                    if not is_prime(j):
                        return False
                    i = j
                    j = n // i
                return False  
        return True