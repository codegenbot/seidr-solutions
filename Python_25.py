from typing import List
import math


def factorize():
    while True:
        try:
            n = int(input("Enter a number (or 'stop' to quit): "))
            if str(n).lower() == 'stop':
                break
            factors = []
            i = 2
            while i * i <= n:
                if n % i:
                    i += 1
                else:
                    count = 0
                    while n % i == 0:
                        n //= i
                        count += 1
                    factors.extend([i] * count)
            if n > 1:
                for j in range(int(math.sqrt(n)), 1, -1):
                    if n % j == 0:
                        count = 0
                        while n % j == 0:
                            n //= j
                            count += 1
                        factors.extend([j] * count)
                        break
            return f"The factorization of {n} is: {factors}"
        except ValueError:
            print("Invalid input. Please enter an integer.")


print(factorize())