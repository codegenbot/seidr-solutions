import math

def simplify():
    x = input("Enter a fraction (e.g., 1/2): ")
    n = input("Enter another fraction: ")

    if x.count('/') != 2 or n.count('/') != 2:
        return False

    x_parts = list(map(int, [0] + x.split("/")[1:]))
    n_parts = list(map(int, [0] + n.split("/")[1:]))

    if (x_parts[0] * n_parts[1]) % math.gcd(n_parts[1], x_parts[1]) == 0 and (
        n_parts[0] * x_parts[1]
    ) % math.gcd(x_parts[1], n_parts[1]) == 0:
        return True
    else:
        return False


print(simplify())