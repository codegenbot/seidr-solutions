def find_zero(xs: tuple):
    a, b = xs
    assert b != 0
    return -a / b

coefficients = tuple(map(int, input("Enter the coefficients of the quadratic equation a and b: ").split()))
result = find_zero(coefficients)
print(f"The value of x where the equation is equal to zero is: {result}")