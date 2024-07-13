def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum([i * 2 if i % 2 else i for i in card_number]) - sum(
        [
            i // 10 + i % 10 if i > 9 else i
            for i in [i * 2 if i % 2 else i for i in card_number]
        ]
    )
    return result