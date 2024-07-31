```
import math

def simplify():
    x_numerator = float(input("Enter the numerator of the first fraction: "))
    x_denominator = float(input("Enter the denominator of the first fraction: "))

    n_numerator = float(input("Enter the numerator of the second fraction: "))
    n_denominator = float(input("Enter the denominator of the second fraction: "))

    if x_denominator == 0 or n_denominator == 0:
        return False

    greatest_common_divisor = math.gcd(x_denominator, n_denominator)
    simplified_x_numerator = x_numerator // greatest_common_divisor
    simplified_x_denominator = x_denominator // greatest_common_divisor
    simplified_n_numerator = n_numerator // greatest_common_divisor
    simplified_n_denominator = n_denominator // greatest_common_divisor

    if simplified_x_denominator == 0:
        return False

    return f"{simplified_x_numerator}/{simplified_x_denominator}"


print(simplify())