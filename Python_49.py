```
import math

def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return -1
    i = 0
    while True:
        i += 1
        if pow(n, i, p) == 1:
            return i

def main():
    while True:
        try:
            a = int(input("Enter the first number: "))
            b = int(input("Enter the second number: "))
            if a < 0 or b < 0:
                print("Please enter positive numbers.")
            else:
                print(modp(a, b))
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    input("Press Enter when ready...")