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
        nums = list(map(int, input().strip().split()))
        if any(n <= 0 for n in nums):
            raise ValueError
        for n in nums:
            result = factorize(n)
            if not result and n > 1:
                print([n])
            else:
                print(result)
    except ValueError:
        print("Invalid input. Please enter positive integers.")