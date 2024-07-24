from typing import List
import math


def factorize() -> List[int]:
    try:
        num = int(input("Enter a number: "))
        factors = []
        for i in range(2, math.isqrt(num) + 1):
            if num % i == 0:
                count = 0
                while num % i == 0:
                    num //= i
                    count += 1
                factors.extend([i] * count)
        if num > 1:
            factors.append(num)
        return factors
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
        return []