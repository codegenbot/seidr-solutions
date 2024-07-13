```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = sum(
        2 * x if i % 2 == 0 else x
        if (2 * x) // 10 > 0 else (2 * x) % 10 + (2 * x) // 10 * 9
        for i, x in enumerate(card_number)
    )
    return result