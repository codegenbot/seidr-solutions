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


def main():
    args = sys.argv[1:]  # Exclude the script name from command-line arguments
    if len(args) == 0:
        print("No input provided")
        return

    try:
        user_input = list(map(int, args))
        if any(n <= 0 for n in user_input):
            print("Input values must be positive integers")
        else:
            result = [factorize(n) for n in user_input]
            print(result)
    except ValueError:
        print("Invalid input")


if __name__ == "__main__":
    main()