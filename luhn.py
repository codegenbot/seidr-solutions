def luhn_algorithm(digits):
    new_digits = []
    for i, digit in enumerate(digits):
        if i % 2 == 1:
            new_digit = digit * 2
            if new_digit > 9:
                new_digit -= 9
            new_digits.append(new_digit)
        else:
            new_digits.append(digit)
    return sum(new_digits)