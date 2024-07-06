def luhn(digits):
    digits = [int(digit) for digit in digits]
    sum = 0
    for i, digit in enumerate(digits[::-2]):
        doubled = digit * 2
        if doubled > 9:
            doubled -= 9
        sum += doubled
    return sum % 10 == 0