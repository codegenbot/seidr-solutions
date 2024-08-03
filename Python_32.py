n = int(input("Enter number of coefficients: "))
coefficients = []
for _ in range(n):
    coefficient = float(input(f"Enter coefficient {i+1}: "))
    coefficients.append(coefficient)

try:
    result = find_zero(coefficients)
except ValueError as e:
    print(e)
else:
    print(f"The zero is at x = {result}")