```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    return sum(
        int(digit) * 2 - 9 if (int(digit) * 2) > 9 else int(digit) * 2
        for i, digit in enumerate(card_number)
    ) % 10