n = int(input("Enter the number of coefficients: "))
coefficients = []
for _ in range(n):
    coefficient = float(input(f"Enter coefficient {i+1}: "))
    coefficients.append(coefficient)
if n % 2 != 0:
    raise ValueError("The number of coefficients must be even")
a = coefficients[-1]
b = -sum(coefficients[:-1])
print(round(-b / (2 * a), 2))