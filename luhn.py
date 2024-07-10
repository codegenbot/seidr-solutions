```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum((d * 2 if i % 2 else d) % 10 for i, d in enumerate(reversed(card_number)))
    return (10 - result % 10) % 10