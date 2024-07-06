from typing import List


def factorize():
    while True:
        try:
            n = int(input("Enter a number (or 'q' to quit): "))
            if n == "q":
                break
            if n < 2:
                print(
                    "Invalid input. Please enter an integer greater than or equal to 2."
                )
                continue
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
                    factors.extend([i] * count)
            if n > 1:
                print("The number is prime.")
            else:
                print(factors)
        except ValueError:
            print("Invalid input. Please enter an integer.")


factorize()