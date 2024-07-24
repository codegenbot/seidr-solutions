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
    try:
        n = input("Enter a positive integer (or 'q' to quit): ")
        if n.lower() == 'q':
            break
        elif n.isdigit():
            n = int(n)
            if n > 0:
                try:
                    print(factorize(n))
                except Exception as e:
                    print(f"Failed to factorize {n}. Error: {str(e)}")
            else:
                print("Please enter a positive integer.")
        else:
            print("Invalid input. Please enter an integer.")
    except ValueError:
        print("Invalid input. Please enter an integer.")