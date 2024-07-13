def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    return str(sum(sum(divmod(x * 2, 10)) - 9 if (x * 2) > 9 else x for i, x in enumerate(card_number)) % 10)