```Python
def find_zero():
    coeffs = list(map(int, input("Enter the coefficients: ").split()))
    if len(coeffs) % 2 != 1:
        return "Error: xs must start with 0"

    x = [0]
    y = [sum([coeff * (i+1)**(len(coeffs)-1-j) for j, coeff in enumerate(coeffs)]) for i in range(len(coeffs))]

    return list(zip(x, y))