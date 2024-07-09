from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    divisor = 2
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors

def main():
    n = int(input())
    factors = factorize(n)
    print(factors)

if __name__ == "__main__":
    main()