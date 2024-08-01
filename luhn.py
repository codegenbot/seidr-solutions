def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    result = sum([x * 2 if i % 2 != 0 else x for i, x in enumerate(card_number)])
    return (result - ((result // 10 + 1) * 9 - result) // 10) * 10