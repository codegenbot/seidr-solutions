def luhn(card_number):
    sum = 0
    for i, digit in enumerate(reversed(card_number)):
        if i % 2 == 1:
            digit = int(digit) * 2
            if digit > 9:
                digit -= 9
        sum += digit
    return str(sum)