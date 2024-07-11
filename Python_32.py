```
import math

coefficients = list(map(float, input("Enter coefficients (separated by space): ").split()))
result = find_zero(coefficients)
print(result if result else "No real solutions exist.")