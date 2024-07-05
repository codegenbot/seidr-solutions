from typing import List

def factorize(n: int) -> List[int]:
    if n <= 1:
        return [n]
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
        n = int(input().strip())
        if n <= 0:
            raise ValueError
        result = factorize(n)
        print(" ".join(map(str, result)))
    except ValueError:
        print("Invalid input. Please enter a positive integer.")