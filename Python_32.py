def find_zero(xs: list):
    a, b = map(int, xs.split())
    assert b != 0
    return -a / b

coefficients = input("Enter the coefficients of the quadratic equation (a b): ")
result = find_zero(coefficients)
print(f"The value of x where the equation is equal to zero is: {result}")