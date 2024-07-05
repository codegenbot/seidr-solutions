from typing import List

def factorize(n: int) -> List[int]:
    if n <= 1:
        return []
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
        numbers = list(map(int, input().strip().split()))
        results = [factorize(n) if n > 1 else [n] for n in numbers]
        for result in results:
            print(result)
    except ValueError:
        print("Invalid input. Please enter integers.")