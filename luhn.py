```
def luhn(card):
    card = list(map(int, card.replace(' ', '')))
    result = sum(sum(divmod(2 * i, 10)) if i % 2 != 0 else i for i in card)
    return '0' if result % 10 == 0 else str(result % 10)