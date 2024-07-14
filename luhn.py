def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    return sum((2*int(digit)) % 10 + int(digit) for i, digit in enumerate(card_number)[1::2]) + sum(int(digit) for i, digit in enumerate(card_number)[::2])