from typing import List


def factorize() -> List[int]:
    num: int = int(input("Enter a number: "))
    i = 2
    factors = []
    while i * i <= num:
        if num % i:
            i += 1
        else:
            count = 0
            while num % i == 0:
                num //= i
                count += 1
            factors.append(i) * count
            i += 1
    if num > 1:
        factors.append(num)
    return [int(f) for f in factors]