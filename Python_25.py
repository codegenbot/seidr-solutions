from typing import List

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
    import sys
    input = sys.stdin.read
    try:
        numbers = map(int, input().strip().split())
        for n in numbers:
            print(factorize(n))
    except ValueError:
        print("Invalid input. Please enter integers only.")