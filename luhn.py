def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = sum(card_number)
    for i, digit in enumerate(reversed(card_number[1:])):
        if i % 2 == 0:
            doubled = digit * 2
            total += doubled if doubled <= 9 else doubled - 9
        else:
            total += digit
    return total