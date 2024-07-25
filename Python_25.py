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
    print("Prime Factorization Program")
    print("Enter a number (at least 2), or 'q' to quit.")
    while True:
        try:
            user_input = input()
            if user_input.lower() == "q":
                break
            user_input = int(user_input)
            if user_input >= 2:
                result = factorize(user_input)
                print(f"The prime factors of {user_input} are: {result}")
            else:
                print(
                    "Invalid input. Please enter an integer greater than or equal to 2."
                )
        except ValueError:
            print("Invalid input. Please enter an integer.")


if __name__ == "__main__":
    main()