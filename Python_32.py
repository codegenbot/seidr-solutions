def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

coefficients = list(map(float, input("Enter the coefficients of the polynomial equation separated by spaces: ").split())
result = find_zero(coefficients)
print("The zero of the polynomial equation is:", result)