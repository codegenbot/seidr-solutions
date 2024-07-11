from typing import List
import math

def factorize() -> List[int]:
    while True:
        try:
            n = int(input())
            factors = []
            i = 2
            while i * i <= n:
                if n % i:
                    i += 1
                else:
                    n //= i
                    count = 0
                    while n % i == 0:
                        n //= i
                        count += 1
                    factors.extend([i] * count)
            if n > 1:
                factors.append(n)
            return [int(factor) for factor in set(map(str, factors))]
        except ValueError:
            print("Invalid input! Please enter a valid integer.")
print(factorize())