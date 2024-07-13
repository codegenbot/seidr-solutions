import math


def phi(p):
    result = p
    for i in range(2, int(math.sqrt(p)) + 1):
        if p % i == 0:
            while p % (i * 1) == 0:
                p /= i
            result -= result // i
    if p > 1:
        result -= result // p
    return result


def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return -1
    phi_val = phi(p)
    if pow(n, phi_val, p) == 1:
        return phi_val
    else:
        return -1


def main():
    while True:
        try:
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
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    input("Press Enter when ready...")