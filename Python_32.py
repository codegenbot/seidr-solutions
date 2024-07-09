def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "Number of coefficients must be even"
    assert xs[-1] != 0, "Largest coefficient must be non-zero"
    a = xs[0]
    b = xs[1]
    c = xs[-1]
    return -c / b

coefficients = list(map(float, input("Enter coefficients separated by space: ").split()))
result = find_zero(coefficients)
print(f"The zero of the function is: {result}")