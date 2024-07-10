from typing import List
import math


def main():
    while True:
        try:
            n = int(input("Enter an integer: "))
            if n < 1:
                print("Please enter a positive integer.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.extend([i] * count)
    if n > 1:
        factors.append(n)

    k = int(input("Enter another integer: "))
    if not any(i in factors for i in [k]):
        print(f"{k} is not a divisor of {factors[0]}")
    else:
        print(f"{k} is a divisor of {factors[0]}")


if __name__ == "__main__":
    main()