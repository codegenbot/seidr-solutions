def luhn(card):
    card = [int(x) for x in card.split()]
    result = sum(2 * int(x) if i % 2 != 0 else int(x) for i, x in enumerate(card))
    result -= 9 * (result // 9)
    return str(result)