def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    result = sum(
        [card * 2 if i % 2 != 0 else card for i, card in enumerate(card_number)]
    )
    return str(result - (result // 10) * 9)