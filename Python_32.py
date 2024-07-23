def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    degree = n // 2
    zero = float(input("Enter initial value for zero: "))
    tol = 1e-9

    for _ in range(100):  # max iterations
        new_zero = zero - evalPoly(zero, xs) / polyDerivative(zero, xs)
        if abs(new_zero - zero) < tol:
            return round(new_zero, 2)
        zero = new_zero

    return "Failed to converge"


def poly(x, coeffs):
    result = 0.0
    for i in range(len(coeffs)):
        result += coeffs[i] * (x ** ((len(coeffs)) // 2 - i))
    return result


def polyDerivative(x, coeffs):
    result = 0.0
    for i in range(len(coeffs)):
        if i != (len(coeffs) // 2):
            result += (
                (i - (len(coeffs) // 2))
                * coeffs[i]
                * (x ** ((len(coeffs)) // 2 - i - 1))
            )
    return result


# get coefficients from user
coeffs = [float(x) for x in input("Enter coefficients: ").split()]

# call the function with user's coefficients
print(find_zero(coeffs))