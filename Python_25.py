from typing import List

def factorize():
    try:
        n = int(input("Enter a positive integer: "))
        if n <= 0:
            raise ValueError("Expected positive integer")
        factors = []
        i = 2
        while i * i <= n:
            if n % i:
                i += 1
            else:
                n //= i
                while n % i == 0:
                    n //= i
                    factors.append(i)
        if n > 1:
            factors.append(n)
        return factors
    except ValueError as e:
        print(f"Error: {e}")