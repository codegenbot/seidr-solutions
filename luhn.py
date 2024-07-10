```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(sum(divmod(2 * d, 10)) + d if i % 2 else d for i, d in enumerate(card_number))
    return "Valid" if result % 10 == 0 else "Invalid"