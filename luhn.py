def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    return sum(2*int(digit) - 9 if i % 2 else int(digit) for i, digit in enumerate(card_number))