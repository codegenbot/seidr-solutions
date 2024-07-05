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
    import sys
    input = sys.stdin.read

    try:
        data = input().strip().split()
        results = []
        for value in data:
            n = int(value)
            if n <= 0:
                raise ValueError
            result = factorize(n)
            results.append(result)
        for res in results:
            print(res)
    except ValueError:
        print("Invalid input. Please enter positive integers.")