
def luhn(digits):
    digits = [int(digit) for digit in digits]
    sum = 0
    for i, digit in enumerate(digits[::-2]):
        doubled = digit * 2
        if doubled > 9:
            doubled -= 9
        sum += doubled
    return sum % 10 == 0

def luhn_verify(digits):
    digits = [int(digit) for digit in digits]
    return luhn(digits) and len(digits) == 16

def main():
    print("Enter the credit card number: ")
    digits = input()
    if luhn_verify(digits):
        print("Credit card number is valid")
    else:
        print("Credit card number is invalid")

if __name__ == "__main__":
    main()