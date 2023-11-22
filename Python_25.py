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


input_line = input("Enter an integer number: ")
try:
    n = int(input_line)
    result = factorize(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer value.")