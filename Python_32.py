def read_input():
    n = int(input("Enter the number of coefficients: "))
    coeffs = list(map(float, input("Enter the coefficients separated by space: ").split()))
    x = float(input("Enter the value of x: "))
    return coeffs, x