```
def find_zero():
    coeffs = list(map(int, input("Enter the coefficients: ").split()))
    if len(coeffs) % 2 != 1:
        return "Error: xs must start with 0"

    x = [0]
    y = coeffs[1:]

    return y