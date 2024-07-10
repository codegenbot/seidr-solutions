````
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(sum(divmod(2 * d if i % 2 == 0 else d, 10)) for i, d in enumerate(card_number))
    return (9 - (result % 10)) if (result % 10) > 4 else (result % 10)