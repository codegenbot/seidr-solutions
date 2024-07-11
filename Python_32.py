def find_zero():
    user_input = input("Enter coefficients (space separated): ")
    xs = [int(x) for x in user_input.split()]
    try:
        result = find_zero(xs)
        print(result if result is not None else "No real root found.")
    except ValueError as e:
        print(f"Error: {e}")


def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    c = xs[-1]

    if c == 0 or b == 0:
        return None

    return -b / (2 * c)