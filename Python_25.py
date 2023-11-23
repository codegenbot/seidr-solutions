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
    user_input = []
    while True:
        try:
            line = input().strip()
            if line == "":
                break
            user_input.append(int(line))
        except EOFError:
            break

    if not user_input:
        print("No input provided")
        return

    result = [factorize(n) for n in user_input]
    print(" ".join(str(f) for sublist in result for f in sublist))


if __name__ == "__main__":
    main()