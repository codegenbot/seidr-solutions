```
import math


def simplify():
    x = input("Enter a fraction (e.g., 1/2): ").split("/")
    n = input("Enter another fraction: ").split("/")

    if len(x) != 2 or len(n) != 2:
        return False

    x_parts = [int(i) for i in x]
    n_parts = [int(i) for i in n]

    if (x_parts[0] * n_parts[1]) % math.gcd(n_parts[1], x_parts[1]) == 0 and (
        n_parts[0] * x_parts[1]
    ) % math.gcd(x_parts[1], n_parts[1]) == 0:
        return True
    else:
        return False


print(simplify())