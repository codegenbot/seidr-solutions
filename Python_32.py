def find_zero(a: int, b: int):
    assert b != 0
    return -a / b

a = int(input("Enter the value of coefficient a: "))
b = int(input("Enter the value of coefficient b: "))
result = find_zero(a, b)
print(f"The value of x where the equation is equal to zero is: {result}")