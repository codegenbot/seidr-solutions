```
def luhn(card):
    card = [int(x) for x in str(card)]
    return sum(sum(divmod(d * 2, 10)) - 9 if (d * 2) > 9 else d for i, d in enumerate(reversed(card))) % 10