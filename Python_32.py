# Task Description: Calculate the average of three numbers.
# Function Signature: def calculate_average(a: float, b: float, c: float) -> float
a, b, c = map(float, input().split())
result = (a + b + c) / 3
print(result)