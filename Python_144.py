```
import math


def simplify():
    numerator1 = int(input(f"Enter first fraction (e.g., {1}/{2}): ").split("/")[0])
    denominator1 = int(input(f"Enter first fraction (e.g., {1}/{2}): ").split("/")[1])

    numerator2 = int(input(f"Enter second fraction (e.g., {3}/{4}): ").split("/")[0])
    denominator2 = int(input(f"Enter second fraction (e.g., {3}/{4}): ").split("/")[1])

    new_numerator = numerator1 * denominator2 + numerator2 * denominator1
    new_denominator = denominator1 * denominator2

    gcd = math.gcd(new_numerator, new_denominator)
    
    return f"{new_numerator // gcd}/{new_denominator // gcd}"


print(simplify())