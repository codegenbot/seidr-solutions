from typing import List
import math


def factorize(num: int) -> List[int]:
    if num <= 1:
        return []

    factors = []
    i = 2
    while i * i <= num:
        if num % i:
            i += 1
        else:
            count = 0
            while num % i == 0:
                num //= i
                count += 1
            factors.append(i**count)
            i += 1
    if num > 1:
        factors.append(num)
    return factors


def main():
    try:
        user_input = int(input("Enter a number to factorize: "))
        if not isinstance(user_input, int):
            raise ValueError("Input must be an integer.")
        print("The factors of {} are: {}".format(user_input, factorize(user_input)))
    except ValueError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    main()