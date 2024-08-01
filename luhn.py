def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    result = sum(
        [2 * x if i % 2 != 0 else x for i, x in enumerate(reversed(card_number))]
    )
    return str(result - (result // 10) * 9)