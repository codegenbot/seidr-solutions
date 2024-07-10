def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even")

    leading_coeff = max(xs, key=abs)
    if leading_coeff == 0:
        raise ValueError("Largest non-zero coefficient must be non-zero")

    if len(xs) == 2:
        return -xs[0] / xs[1]

    for i in range(1, len(xs)):
        if xs[i] == 0:
            continue
        return -xs[0] / xs[i]

user_input = input("Enter the list of coefficients separated by space: ")
coefficients = list(map(float, user_input.split()))
result = find_zero(coefficients)
print(result)