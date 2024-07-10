def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum([i * 2 if i % 2 else i for i in card_number]) - sum(
        [
            x // 10 + x % 10
            for x in [i * 2 if i % 2 else i for i in card_number]
            if x > 9
        ]
    )
    return str(result)