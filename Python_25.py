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


print("Enter a number:")


while True:
    try:
        n = int(input("Enter a positive integer (or 'q' to quit): "))
        if n <= 0: 
            print("Please enter a positive integer.")
            continue
        print(*factorize(n), sep=', ')
    except ValueError:
        print("Invalid input. Please enter an integer or 'q' to quit.")