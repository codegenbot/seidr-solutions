````
from typing import List
import math


def factorize(n: int) -> List[int]:
    if n <= 0:
        return []
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


def main():
    print("Enter a number (at least 2): ")
    while True:
        try:
            user_input = int(input())
            if user_input >= 2:
                break
            else:
                print("Invalid input. Please enter an integer greater than or equal to 2.")
        except ValueError:
            print("Invalid input. Please enter an integer.")
    result = factorize(user_input)
    print(result)


if __name__ == "__main__":
    main()
```