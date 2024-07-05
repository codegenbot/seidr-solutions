from typing import List
import sys

def factorize(n: int) -> List[int]:
    factors = []
    divisor = 2
    while n > 1:
        while n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        divisor += 1
    return factors

if __name__ == "__main__":
    try:
        n = int(sys.stdin.read().strip())
        print(factorize(n))
    except ValueError:
        print("Invalid input. Please enter an integer.")