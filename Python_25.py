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
    user_input = input().strip().split(",") if input() else []
    if not user_input:
        print("No input provided")
        return

    try:
        user_input = [int(n) for n in user_input if n.isdigit()]
        if any(not n.isdigit() or int(n) <= 0 for n in user_input):
            print("Input values must be positive integers")
        else:
            result = [factorize(int(n)) for n in user_input if n.isdigit()]
            print(' '.join(str(f) for sublist in result for f in sublist))
    except ValueError:
        print("Invalid input")


if __name__ == "__main__":
    main()