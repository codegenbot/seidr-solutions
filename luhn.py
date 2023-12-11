def luhn(credit_card_number):
    digits = list(map(int, credit_card_number))
    new_digits = []
    for i in range(1, len(digits), 2):
        digit = digits[i] * 2
        if digit > 9:
            digit -= 9
        new_digits.append(digit)
    return sum(new_digits)