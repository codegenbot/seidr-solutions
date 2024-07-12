def find_zero(xs: list):
    a, b = xs
    assert b != 0
    return -a / b

# Prompt the user to input the coefficients of the quadratic equation (space separated)
coefficients = list(map(int, input("Enter the coefficients of the quadratic equation (a b): ").replace(',', ' ').split()))
result = find_zero(coefficients)
print(f"The value of x where the equation is equal to zero is: {result}")