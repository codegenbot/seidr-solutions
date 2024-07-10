```
def luhn(card):
    card = [int(x) for x in str(card)]
    return sum(
        2 * int(digit) - 9 if i % 2 else int(digit) for i, digit in enumerate(card)
    ) % 10