def luhn(digits):
    return sum((digit * 2 if i % 2 else digit) for i, digit in enumerate(digits))