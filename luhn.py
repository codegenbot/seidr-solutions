```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(sum(divmod(d * 2 if i % 2 else d, 10)) for i, d in enumerate(card_number))
    return result % 10