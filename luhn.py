```
def luhn(card_number):
    card_number = [int(d) for d in str(card_number)]
    result = sum(
        2 * digit if i % 2 else digit for i, digit in enumerate(card_number)
    )
    return str(result - (result // 10) * 9)