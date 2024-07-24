```
from typing import List


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i**count)
            i += 1
    if n > 1:
        factors.append(n)
    return factors


while True:
    n = input("Enter a positive integer (or 'q' to quit): ")
    if n.lower() == 'q':
        break
    try:
        n = int(n)
    except ValueError:
        print("Invalid input. Please enter an integer or 'q' to quit.")
        continue
    if n > 0: 
        print(*factorize(n), sep=', ')
    else: 
        print("Please enter a positive integer.")