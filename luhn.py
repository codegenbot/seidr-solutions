def luhn(digits):
    digits = list(map(int, digits))
    doubled_digits = [digit * 2 if i % 2 == 0 else digit for i, digit in enumerate(digits)]
    subtracted_digits = [digit - 9 if digit > 9 else digit for digit in doubled_digits]
    return sum(subtracted_digits)