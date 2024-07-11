```
import math


def is_valid_fraction(fraction):
    try:
        a, b = map(int, fraction.split("/"))
        if a == 0:
            return False
        if b == 0 or (a != 0 and b != 0):
            return False
        return True
    except ValueError:
        return False


while True:
    x = input("Enter the fraction x (in the format 'a/b'): ").strip()
    while not is_valid_fraction(x):
        x = input("Invalid input. Enter the fraction x (in the format 'a/b'): ").strip()

    a, b = map(int, x.split("/"))

    n = input("Enter the fraction n (in the format 'a/b'): ").strip()
    while not is_valid_fraction(n):
        n = input("Invalid input. Enter the fraction n (in the format 'a/b'): ").strip()

    c, d = map(int, n.split("/"))

    if b == 0 or d == 0:
        print("Error: Division by zero is not allowed")
    else:
        common_divisor = math.gcd(b, d)
        simplified_x_num = a * (d // common_divisor)
        simplified_x_denom = b // common_divisor

        common_divisor = math.gcd(c, d)
        if c % common_divisor != 0:
            common_divisor = math.gcd(a * common_divisor, b)
        simplified_y_num = c // common_divisor
        simplified_y_denom = d // common_divisor

        print(f"{simplified_x_num}/{simplified_x_denom} and {simplified_y_num}/{simplified_y_denom}")

        sum_num = a * simplified_y_denom + c * simplified_x_denom
        sum_denom = b * simplified_y_denom

        if sum_denom == 0:
            print("Error: Division by zero is not allowed")
        else:
            common_divisor = math.gcd(sum_num, sum_denom)
            simplified_sum_num = sum_num // common_divisor
            simplified_sum_denom = sum_denom // common_divisor
            print(f"Sum: {simplified_sum_num}/{simplified_sum_denom}")