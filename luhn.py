def luhn_algorithm(digits):
    doubled = [digit * 2 for digit in digits[1::2]]
    for i in range(len(doubled)):
        if doubled[i] > 9:
            doubled[i] -= 9
    return sum(doubled) + sum(digits[::2])


def main():
    while True:
        digits = [int(x) for x in input("Enter a vector of 16 digits: ").split()]
        if len(digits) != 16:
            print("Invalid input. Please enter exactly 16 digits.")
            continue
        result = luhn_algorithm(digits)
        print(f"The sum of the new digits is {result}.")