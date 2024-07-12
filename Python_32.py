def find_zero(xs: list):
    a, b = map(int, xs)
    assert b != 0
    return -a / b

a, b = map(int, input("Enter the coefficients 'a' and 'b' of the quadratic equation: ").split())
result = find_zero([a, b])
print(f"The value of x where the equation is equal to zero is: {result}")