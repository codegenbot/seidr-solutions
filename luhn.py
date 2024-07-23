```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    doubled_cards = [(2 * int(digit)) % 10 if i % 2 != 0 else int(digit) for i, digit in enumerate(card_number)]
    return str(sum(doubled_cards))