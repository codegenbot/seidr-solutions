def luhn(card):
    card = list(map(int, card.split()))
    result = sum(2 * int(i) if i % 2 != 0 else int(i) for i in card)
    return str(result % 10)