import math


def find_zero():
    while True:
        xs = [int(x) for x in input("Enter coefficients separated by space: ").split()]

        if len(xs) % 2 != 0:
            print("Coefficients must have even number. Try again.")
        else:
            break

    n = len(xs)
    a = xs[-1]
    b = -sum(x for x in xs[:-1])
    c = sum(x * (i - 1) for i, x in enumerate(xs[:-1], 2))
    d = -sum(x * math.factorial(i - 1) for i, x in enumerate(xs[:-1], 2))

    x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    return round(x, 2)


print(find_zero())