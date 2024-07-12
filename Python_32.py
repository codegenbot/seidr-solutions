def find_zero(xs: list):
    a, b = map(int, xs)
    assert b != 0
    return -a / b

a = int(input("Enter the coefficient 'a' of the quadratic equation: "))
b = int(input("Enter the coefficient 'b' of the quadratic equation: "))
result = find_zero([a, b])
print(f"The value of x where the equation is equal to zero is: {result}")