```
import math
coefficients = input().split()
a = float(coefficients[0])
b = float(coefficients[1])
c = float(coefficients[2])
discriminant = b**2 - 4*a*c
if discriminant > 0:
    print("The equation has two distinct real roots.")
elif discriminant == 0:
    print("The equation has one repeated real root.")
else:
    print("The equation has no real roots.")