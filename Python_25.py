import sys
from typing import List

def factorize(n: int) -> List[int]:
    if n <= 1:
        return []

    factors = []
    i = 2
    while i * i <= n:
        if n % i == 0:
            n //= i
            factors.append(i)
        else:
            i += 1
    if n > 1:
        factors.append(n)
    return factors

if len(sys.argv) != 2:
    print("Invalid input")
else:
    try:
        user_input = int(sys.argv[1])

        if user_input <= 0:
            print("Input must be a positive integer")
        else:
            result = factorize(user_input)
            print(result)

    except ValueError:
        print("Invalid input")