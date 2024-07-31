```
def simplify():
    numerator1 = int(input("Enter first fraction numerator: "))
    denominator1 = int(input(f"Enter first fraction denominator: "))

    numerator2 = int(input(f"Enter second fraction numerator: "))
    denominator2 = int(input(f"Enter second fraction denominator: "))

    new_numerator = math.gcd(numerator1*denominator2, numerator2*denominator1)
    new_denominator = math.gcd(denominator1 * denominator2)

    return """{}""".format(f"{new_numerator}/{new_denominator}")