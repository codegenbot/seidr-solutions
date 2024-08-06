def luhn(card):
    card = [int(x) for x in card[2:]]
    result = sum(
        [
            i % 2 == 0 and int(str(2 * c)) // 10 + int(str(2 * c)) % 10 or c
            for i, c in enumerate(reversed(card))
        ]
    )
    return str(result)