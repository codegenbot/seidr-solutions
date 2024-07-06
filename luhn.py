import numpy as np


def luhn_algorithm(digits):
    doubled_digits = digits[::2] * 2

    for i in range(len(doubled_digits)):
        if doubled_digits[i] > 9:
            doubled_digits[i] -= 9

    return sum(doubled_digits)


def main():
    while True:
        digits = list(map(int, input("Enter a vector of 16 digits: ").split()))
        if len(digits) != 16:
            print("Invalid input. Please enter exactly 16 digits.")
            continue
        result = luhn_algorithm(digits)
        print(f"The sum of the new digits is {result}.")
        break


if __name__ == "__main__":
    main()