import math


def simplify(numerator1, denominator1, numerator2, denominator2):
    common_divisor = math.gcd(denominator1, denominator2)
    new_numerator1 = numerator1 // common_divisor
    new_denominator1 = denominator1 // common_divisor
    new_numerator2 = numerator2 // common_divisor
    new_denominator2 = denominator2 // common_divisor

    gcd = math.gcd(new_numerator1, new_denominator1)
    new_numerator1 //= gcd
    new_denominator1 //= gcd

    gcd = math.gcd(new_numerator2, new_denominator2)
    new_numerator2 //= gcd
    new_denominator2 //= gcd

    return f"{new_numerator1}/{new_denominator1} + {new_numerator2}/{new_denominator2}"