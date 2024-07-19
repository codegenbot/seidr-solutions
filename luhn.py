```
def luhn(card):
    card = [int(x) for x in str(card)[::-1].replace(" ", "")]
    result = sum(
        d if i % 2 == 0 else (d * 2 - 9) if (d * 2) > 9 else d * 2
        for i, d in enumerate(card)
    )
    return str(result)