
def luhn_algorithm(digits):
    doubled_digits = [digits[i] * 2 if i % 2 == 0 else digits[i] for i in range(16)]
    subtracted_digits = [digit - 9 if digit > 9 else digit for digit in doubled_digits]
    return sum(subtracted_digits)