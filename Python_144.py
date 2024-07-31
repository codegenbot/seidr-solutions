```
import math

def simplify():
    numerator1 = int(input("Enter first fraction (e.g., 1/2): ").split('/')[0])
    denominator1 = int(input("Enter the denominator: ").split('/')[1])

    numerator2 = int(input(f"Enter second fraction (e.g., {3}/{4}): ").split('/')[0])
    denominator2 = int(input(f"Enter the denominator: ").split('/')[1])

    new_numerator1 = math.gcd(numerator1, denominator1)
    new_denominator1 = denominator1 // new_numerator1
    numerator1 //= new_numerator1

    new_numerator2 = math.gcd(numerator2, denominator2)
    new_denominator2 = denominator2 // new_numerator2
    numerator2 //= new_numerator2

    new_numerator = numerator1 * new_denominator2
    new_denominator = new_denominator1 * new_denominator2

    return f"{new_numerator}/{new_denominator}"

print(simplify())