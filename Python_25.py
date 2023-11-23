from typing import List


def factorize(n: int) -> List[int]:
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


try:
    n = int(input())
    result = factorize(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer value.")
except EOFError:
    print("No input provided. Program terminated.")
except KeyboardInterrupt:
    print("\nKeyboard interrupt detected. Program terminated.")