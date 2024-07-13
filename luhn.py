def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]
    sum = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 0:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
    return 0 if sum % 10 == 0 else 1 - (sum % 10)