def luhn(card_number):
    card_number = [int(x) if i % 2 == 0 else int(x) * 2 - 9 if (int(x) * 2) > 9 else int(x) * 2 for i, x in enumerate(str(card_number))]
    return sum(card_number)