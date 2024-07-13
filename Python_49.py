import math


def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return -1
    i = 1
    while math.pow(a, i, b) != 1:
        i += 1
    return i


def main():
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))
    if a < 0 or b < 0:
        print("Please enter positive numbers.")
    else:
        result = modp(a, b)
        if result == -1:
            print("Not coprime")
        else:
            print(f"The order of {a} modulo {b} is {result}")