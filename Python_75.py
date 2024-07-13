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
        prime_product = is_prime(product)
        return prime_product
    else: 
        def is_prime(m):
            if m < 2:
                return False
            for i in range(2, int(m**0.5) + 1):
                if m % i == 0:
                    return False
            return True

        return is_prime(n)