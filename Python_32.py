n, *coefficients = map(
    int,
    input(
        "Enter the number of coefficients followed by the coefficients separated by spaces:\n"
    ).split(),
)


def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    return sum(xs)


result = find_zero(coefficients)
print(result)