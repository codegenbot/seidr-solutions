n = int(input("Enter number of coefficients: "))
coefficients = [
    float(x) for x in input(f"Enter {n} coefficients separated by space: ").split()
]
try:
    result = find_zero(coefficients)
except ValueError as e:
    print(e)
else:
    print(f"The result is {result}")