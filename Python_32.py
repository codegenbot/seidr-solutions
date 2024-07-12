def find_zero(xs: list):
    a, b = map(int, xs)
    if b == 0:
        return "Division by zero is not allowed."
    return -a / b


coefficients = list(
    map(int, input("Enter the coefficients of the quadratic equation (a b): ").split())
)
result = find_zero(coefficients)
print(f"The value of x where the equation is equal to zero is: {result}")