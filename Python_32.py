def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = xs[3] if n > 3 else 0
    x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    return round(x, 2)


def main():
    # Get user input
    user_input = input("Enter coefficients for quadratic equation: ")

    try:
        # Convert string to list of floats
        coefficients = [float(num) for num in user_input.split()]

        # Call the function with provided coefficients
        result = find_zero(coefficients)

        print(f"The zero is {result}")

    except ValueError as e:
        print(e)


if __name__ == "__main__":
    main()